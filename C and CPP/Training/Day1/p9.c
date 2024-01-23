#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character :");
    scanf("%c", &ch);

    if (48 <= ch && ch <= 57)
    {
        printf("Digit \n");
    }

    else
    {
        printf("Not Digit \n");
    }

    return 0;
}