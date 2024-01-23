#include<stdio.h>
#include<string.h>

int isPalindrome(char s[]){
    int l=0,r=strlen(s)-1;
    while(l<r){
        if(s[l]!=s[r]){
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

int main(){
    printf("Enter string :");
    char s[100];
    scanf("%s",s);
    if(isPalindrome(s)){
    printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    return 0;
}