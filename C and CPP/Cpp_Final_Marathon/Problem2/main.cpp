#include<iostream>
#include"conversion.h"

int main(){

    Conversion c1;
    Conversion c2;
    Conversion c3(c2);

    Conversion c4;
    c4=c1+c2;

    c1.accept();
    c2.accept();

    c1.display();
    c2.display();


    std::cout<<"Average of array is "<< c1() <<"\n";

    c1++;
    ++c2;


    try{
        int n=c1[2];
        std::cout<<"Element at index 2 :" <<c1[2]<<"\n";

    }catch(IndexException e){
        std::cout<< e.what() <<"\n";
    }



    c1.display();
    
    return 0;
}