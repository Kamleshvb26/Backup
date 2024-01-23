#include<stdio.h>
int HCF(int num1, int num2){
    int lower=(num1<num2)?num1:num2;

    while (lower>0)
    {
        if(num1%lower==0 && num2%lower==0){
            break;
        }
        lower--;
    }
    return lower;
    
}
int LCM(int num1, int num2){
    int higher=(num1>num2)?num1:num2;
    int temp=higher;
    while (1)
    {
        if(higher%num1==0 && higher%num2==0){
            break;
        }
        higher+=temp;
    }
    return higher;


}

int main(){

    int num1 , num2 ;
    printf("Enter a numbers :");
    scanf("%d%d", &num1, &num2);
    int hcf=HCF(num1,num2);
    int lcm=LCM(num1,num2);
    printf("HFC is %d\n",hcf);
    printf("LCM is %d\n",lcm);
    return 0;
}