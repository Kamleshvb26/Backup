#ifndef RESPONSE_H
#define RESPONSE_H

#include <iostream>

class Response
{
private:
    std::string _response{""};
    long _response_status_code{0L};
    double _elapsed_time_since_execution{0.0};

public:
    Response() = default;

    Response(const Response &) = delete;

    Response(Response &&) = delete;

    Response &operator=(Response &) = delete;

    Response &operator=(Response &&) = delete;

    ~Response() = default;
  
    std::string& response()  { return _response; }

    long responseStatusCode() const { return _response_status_code; }

    double elapsedTimeSinceExecution() const { return _elapsed_time_since_execution; }

    friend std::ostream &operator<<(std::ostream &os, const Response &rhs);
};

#endif // RESPONSE_H
