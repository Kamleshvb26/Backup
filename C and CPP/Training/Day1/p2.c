#include<stdio.h>

int main(){
    char ch;
    printf("Enter character :");
    scanf("%c",&ch);

    if(65<=ch && ch<=90){          //check if upper case 
        ch+=32;                    //convert to lower case
        printf("Output :%c\n",ch);

    }
    else if(97<=ch && ch<=122){    // check if lower case 
        ch-=32;                    //convert to upper case 
        printf("Output :%c\n",ch);
    }
    else{
        printf("Not character \n");
    }

    return 0;
}