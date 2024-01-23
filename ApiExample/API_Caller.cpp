#include "API_Caller.h"
#include <curl/curl.h>

std::ostream &operator<<(std::ostream &os, const API_Caller &rhs)
{
    os << "\n_end_point: " << rhs._end_point
       << "\n_response: " << *rhs._response;
    return os;
}
/*
    constructor mapping for various attributes
*/

API_Caller::API_Caller(const std::string &url) : _end_point(url), _curl_session_object(curl_easy_init()), _response{std::make_shared<Response>()} {};

API_Caller::API_Caller(std::string url, std::string header) : API_Caller(url)
{
    _request_header = header;
}

size_t writeFunction(void *ptr, size_t size, size_t nmemb, std::string *data)
{
    data->append((char *)ptr, size * nmemb);
    return size * nmemb;
}

void API_Caller::Execute_API_Call()
{
    std::cout<< "Endpoint : "<<_end_point <<"\n";

    // curl_easy_setopt(_curl_session_object, CURLOPT_URL, _end_point);
    curl_easy_setopt(_curl_session_object, CURLOPT_URL, "https://min-api.cryptocompare.com/data/price?fsym=BTC&tsyms=USD,JPY,EUR");
    // curl_easy_setopt(_curl_session_object, CURLOPT_URL, "http://192.168.43.35:8080");
    
    
    /*
        create a string object for response data to be stored
    */

    /*
        we need a function that can read response receive and write it
        (byte-by-byte) into response_string variable.
        This function (writeFunction is defined above))
    */

    curl_easy_setopt(_curl_session_object, CURLOPT_NOPROGRESS, 1L);
    curl_easy_setopt(_curl_session_object, CURLOPT_MAXREDIRS, 50L);
    curl_easy_setopt(_curl_session_object, CURLOPT_TCP_KEEPALIVE, 1L);

    std::string response_string{""};
    std::string header_string{""};

    // curl_easy_setopt(_curl_session_object, CURLOPT_WRITEFUNCTION, writeFunction);

    curl_easy_setopt(_curl_session_object, CURLOPT_WRITEFUNCTION, +[](void *contents, size_t size, size_t nmemb, void *userp)
                     {
    ((std::string *)userp)->append((char *)contents, size * nmemb);
    return size * nmemb; });

    /*
        specify where data has to be written (address of response string)
    */
    // std::string string = _response->response();

    curl_easy_setopt(_curl_session_object, CURLOPT_WRITEDATA, &_response->response());

    /*
        specify where header data comes from (location of header_string)
    */
    curl_easy_setopt(_curl_session_object, CURLOPT_HEADERDATA, &header_string);

    /*
       after all settings above, finally execute curl
       with all options provided
   */
    curl_easy_perform(_curl_session_object);

    std::cout << "reached here "
              << "\n";

    std::cout << response_string << "\n";
    // std::cout << header_string << "\n";
}
