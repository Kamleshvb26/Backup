#ifndef API_CALLER_H
#define API_CALLER_H

#include <iostream>
#include <curl/curl.h>
#include<memory>
#include"Response.h"
class API_Caller
{
private:

    CURL *_curl_session_object{nullptr};
    std::string _end_point{nullptr};
    std::shared_ptr<Response> _response{nullptr};
    std::string _request_header{" "};
public:

    API_Caller(const std::string& url);
    API_Caller(std::string url,std::string header);
    
    void Execute_API_Call();

    API_Caller() = default;

    API_Caller(const API_Caller &) = delete;

    API_Caller(API_Caller &&) = delete;

    API_Caller &operator=(API_Caller &) = delete;

    API_Caller &operator=(API_Caller &&) = delete;

    ~API_Caller() = default;

    friend std::ostream &operator<<(std::ostream &os, const API_Caller &rhs);

};

#endif // API_CALLER_H
