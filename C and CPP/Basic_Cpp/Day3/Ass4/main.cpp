#include <iostream>
#include "header.h"



bool search(Account arr[],int accno,int size){
    for(int i=0;i<size;i++){
        if(arr[i].getAccNo()==accno){
            arr[i].display();
            std::cout<<"\n";
            return 1;
        }
    }
    std::cout<<"Not Found \n";
    return -1;
}

int main()
{
    Account newAccounts[2] = {{12341, "Jay", 123456}, {12342, "Viru", 765432}};

    Account *ptr = new Account;

    // ptr->display();
    // std::cout << "\n";

    // for (int i = 0; i < 2; i++)
    // {
    //     newAccounts[i].display();
    //     std::cout << "\n";
    // }

    search(newAccounts,12341,2);

    delete ptr;

    return 0;

    return 0;
}