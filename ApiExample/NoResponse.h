#ifndef NORESPONSE_H
#define NORESPONSE_H
#include <iostream>
class NoResponse : public std::exception
{
private:
    char *_error_msg{nullptr};

public:
    NoResponse() = default;
    NoResponse(const NoResponse &) = delete;
    NoResponse(NoResponse &&) = delete;
    NoResponse &operator=(NoResponse &) = delete;
    NoResponse &operator=(NoResponse &&) = delete;
    ~NoResponse() = default;

    NoResponse(char *msg) : _error_msg(msg)
    {
    }

    const char *what() const noexcept
    {
        return _error_msg;
    }
};

#endif // NORESPONSE_H
