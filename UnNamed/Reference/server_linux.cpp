#include "http_tcpServer_linux.h"

int main()
{
    using namespace http;

    TcpServer server = TcpServer("172.18.5.122", 8080);
    server.startListen();
    

    return 0;
}