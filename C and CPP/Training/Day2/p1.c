#include<stdio.h>

int main(){

    float fahrenheit, centigrade;
    printf("Enter temperature in fahrenheit :");
    scanf("%f",&fahrenheit);
    centigrade=(fahrenheit-32)*5/9;
    printf("Centigraede :%f\n",centigrade);

    return 0;
}