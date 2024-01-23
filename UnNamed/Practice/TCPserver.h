#ifndef TCPSERVER_H
#define TCPSERVER_H

namespace http{

    class TcpServer
    {
        private:
            
        
        public:
            TcpServer() = default;
            TcpServer(const TcpServer &) = delete;
            TcpServer(TcpServer &&) = delete;
            TcpServer &operator=(const TcpServer &) = delete;
            TcpServer &operator=(TcpServer &&) = delete;
    
            TcpServer(/*parameters*/);
    
    
            ~TcpServer()=default;
    
            
    };
};

#endif // TCPSERVER_H
