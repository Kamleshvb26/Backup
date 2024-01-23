#include "salesman.h"
#include"manager.h"
#include<iostream>

int main()
{
    // int a=10;
    // std::cout<<typeid(a).name()<<std::endl;
    // int *p=&a;
    // std::cout<<typeid(p).name()<<std::endl;
    // std::cout<<typeid(*p).name()<<std::endl;


    Employee * e = new Salesperson();
    std::cout<<"\n e= "<<typeid(e).name()<<std::endl;
    std::cout<<"\n *e = "<<typeid(*e).name()<<std::endl;

//     e->display();

// // RTTI - run time type identification
//     if(typeid(*e) == typeid(Salesperson))
//     {

//     Salesperson *sp = dynamic_cast<Salesperson*>(e);// down casting
//     std::cout<<"comm = "<<sp->calculateCommission();
//     }
//     else
//        std::cout<<"\n Other type\n ";
//     delete e;





    // Salesperson sp2(1034,"Neha",340000,300000,0.06);
    // sp2.display();
    // std::cout<<"\n Net salary = "<<sp2.calNetSalary();


    // Salesperson sp1;
    // sp1.display();

    // Employee e1;
    // e1.display();
    // std::cout<<"\n Net salary = "<<e1.calNetSalary();

}