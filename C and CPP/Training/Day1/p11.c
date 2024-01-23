#include<stdio.h>

enum Days{MON, TUE, WED, THU, FRI, SAT, SUN};

int main(){

    enum Days day=MON;

    switch (day)
    {
    default:
        printf("Some Error\n");
        break;
    
    case   MON:
        printf("MONDAY\n");
        break;
    case   TUE:
        printf("TURSDAY \n");
        break;
    case   WED:
        printf("WEDNESDAY\n");
        break;
    case   THU:
        printf("THURSDAY\n");
        break;
    case   FRI:
        printf("FRIDAY\n");
        break;
    case   SAT:
        printf("SATURDAY\n");
        break;
    case   SUN:
        printf("SUNDAY\n");
        break;
    }
    
    return 0;
}