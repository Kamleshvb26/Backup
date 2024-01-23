#include"header.h"

int main()
{
 Employee obj(1002,"Adesh",30000);
 obj.display();   
 std::cout<<"\nNet salary : "<<obj.calNetSal()<<std::endl;
}