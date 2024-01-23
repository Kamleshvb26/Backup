#include<iostream>
#include"header.h"


int main(){

    //Created object of Electricity class in stack memory
    Electricity e1;
    
    //Accept input from user
    e1.accept();


    //display details
    e1.display();

    //Final electricity bill
    
    std::cout<<"\n\nYour Final Bill is : "<<e1.calculateElectricityBill()<<"\n";

    return 0;
}
