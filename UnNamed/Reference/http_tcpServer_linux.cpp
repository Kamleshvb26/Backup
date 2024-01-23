#include "http_tcpServer_linux.h"

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <cstring>

namespace
{
    const int BUFFER_SIZE = 30720;

    void log(const std::string &message)
    {
        std::cout << message << std::endl;
    }

    void exitWithError(const std::string &errorMessage)
    {
        log("ERROR: " + errorMessage);
        exit(1);
    }
}

namespace http
{

    TcpServer::TcpServer(std::string ip_address, int port) : m_ip_address(ip_address), m_port(port), m_socket(), m_new_socket(),
                                                             m_incomingMessage(),
                                                             m_socketAddress(), m_socketAddress_len(sizeof(m_socketAddress)),
                                                             m_serverMessage(buildResponse())
    {
        m_socketAddress.sin_family = AF_INET;
        m_socketAddress.sin_port = htons(m_port);
        m_socketAddress.sin_addr.s_addr = inet_addr(m_ip_address.c_str());

        if (startServer() != 0)
        {
            std::ostringstream ss;
            ss << "Failed to start server with PORT: " << ntohs(m_socketAddress.sin_port);
            log(ss.str());
        }
    }

    TcpServer::~TcpServer()
    {
        closeServer();
    }

    int TcpServer::startServer()
    {
        m_socket = socket(AF_INET, SOCK_STREAM, 0);
        if (m_socket < 0)
        {
            exitWithError("Cannot create socket");
            return 1;
        }

        if (bind(m_socket, (sockaddr *)&m_socketAddress, m_socketAddress_len) < 0)
        {
            exitWithError("Cannot connect socket to address");
            return 1;
        }

        return 0;
    }

    void TcpServer::closeServer()
    {
        close(m_socket);
        close(m_new_socket);
        exit(0);
    }

    void TcpServer::startListen()
    {
        if (listen(m_socket, 20) < 0)
        {
            exitWithError("Socket listen failed");
        }

        std::ostringstream ss;
        ss << "\n*** Listening on ADDRESS: " << inet_ntoa(m_socketAddress.sin_addr) << " PORT: " << ntohs(m_socketAddress.sin_port) << " ***\n\n";
        log(ss.str());

        int bytesReceived;

        while (true)
        {
            log("====== Waiting for a new connection ======\n\n\n");
            acceptConnection(m_new_socket);
            char buffer[BUFFER_SIZE] = {0};
            bytesReceived = read(m_new_socket, buffer, BUFFER_SIZE);
            if (bytesReceived < 0)
            {
                exitWithError("Failed to read bytes from client socket connection");
            }

            std::ostringstream ss;
            ss << "------ Received Request from client ------\n\n";
            log(ss.str());

            std::cout << buffer << "\n";

            sendResponse();

            close(m_new_socket);
        }
    }

    void TcpServer::acceptConnection(int &new_socket)
    {
        new_socket = accept(m_socket, (sockaddr *)&m_socketAddress, &m_socketAddress_len);
        if (new_socket < 0)
        {
            std::ostringstream ss;
            ss << "Server failed to accept incoming connection from ADDRESS: " << inet_ntoa(m_socketAddress.sin_addr) << "; PORT: " << ntohs(m_socketAddress.sin_port);
            exitWithError(ss.str());
        }
    }

    std::string TcpServer::buildResponse()
    {

        
        std::string htmlFile = "<!DOCTYPE html><html lang=\"en\"><body><h1> Hey I am Rushiraj Gandu and this is my selfie:) </h1> <div> <img src=\"data:image/jpeg;base64,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\" width=\"200\" height=\"200\"><img src=\"data:image/jpeg;base64,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\" alt=\"Pig in a jacket\" width=\"200\" height=\"200\">  <div style=\"border:2px solid black\"<p>  </p> </div> </div></body></html>";
        std::ostringstream ss;
        ss << "HTTP/1.1 200 OK\nContent-Type: text/html\nContent-Length: " << htmlFile.size() << "\n\n"
           << htmlFile;

        return ss.str();
    }

    void TcpServer::sendResponse()
    {
        long bytesSent;

        bytesSent = write(m_new_socket, m_serverMessage.c_str(), m_serverMessage.size());

        if (bytesSent == m_serverMessage.size())
        {
            log("------ Server Response sent to client ------\n\n");
        }
        else
        {
            log("Error sending response to client");
        }
    }

} // namespace http