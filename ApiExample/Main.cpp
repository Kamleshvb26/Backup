#include <iostream>
#include "API_Caller.h"
#include <memory>

int main()
{
    std::string _end_point = "https://min-api.cryptocompare.com/data/price?fsym=BTC&tsyms=USD,JPY,EUR";
    // std::string _end_point = "http://192.168.43.35:8080";
    
    auto api_ptr = std::make_shared<API_Caller>(_end_point);
    api_ptr->Execute_API_Call();
    std::cout<<*api_ptr<<"\n";
    
    return 0;
}