#include<iostream>
#include"bill.h"
#include"dateexp.h"


void calculateTotalBill(Bill arr[],int n){
    int total = 0;

    for(int i=0;i<n;i++){
        total+=arr[i].getBillAmount();
    }

    std::cout<< "Total Bill AMount is : "<< total<<"\n";
}


void Display(Bill arr[],int n, char *nm){
    
    int flag=0;

    for(int i=0;i<n;i++){
        if( !strcmp(arr[i].getCustomerName() ,nm)){
            flag=1;
            std::cout<< arr[i] <<"\n";
        }
     
    }

    if(!flag){
        std::cout<< "No Customer found " <<"\n";
    }

}




int main(){

    Bill arr[3];

 

    for(int i=0;i<3;i++){
        // try{

        arr[i].accept();
        // }catch(DateException e){
        //     std::cout<< e.what() <<"\n";
        // }
    }


    for (int i = 0; i < 3; i++)
    {
        // arr[i].display();
        std::cout<< arr[i] <<"\n";
    }

    calculateTotalBill(arr,3);

    char nm[20];
    std::cout<< "Enter name of customer to display details :";
    std::cin>> nm ;


    Display(arr,3,nm);


    
    return 0;
}