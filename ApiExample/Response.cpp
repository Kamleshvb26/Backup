#include"Response.h"

std::ostream &operator<<(std::ostream &os, const Response &rhs) {
    os << "\n_response: " << rhs._response
       << "\n_response_status_code: " << rhs._response_status_code
       << "\n_elapsed_time_since_execution: " << rhs._elapsed_time_since_execution;
    return os;
}
