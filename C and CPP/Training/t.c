// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char str[]="KPIT";
    int i=0;
    while(str[i]!='\0'){
        printf("%c ",str[i]);
        i++;
    }
    printf("\n");
    printf("%d\n",sizeof(str));
    printf("%d\n",strlen(str));

    return 0;
}