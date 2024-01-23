#include<stdio.h>
#include"header.h"

int main(){
    int number;
    while (1)
    {
        printf("Enter Positive Number :");
        scanf("%d",&number);
        if(number<=0){  // prompting user for valid input 
            printf("Please Enter positive number \n");
            continue;
        }
        break;
       
    }

    int ans=puzzleAdv(number);

    int dig=countDigits(number); // count digits in number

    printf("Input = %d\n",number); 
    printf("Output = %d\n",ans); 
    printf("The input has %d digits, so the result is %d as per the specified rule \n",dig,ans);
    
    return 0;
}