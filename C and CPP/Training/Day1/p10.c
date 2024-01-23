#include <stdio.h>

int main()
{

    int num1, num2, num3;
    printf("Enter numbers :");
    scanf("%d%d%d", &num1, &num1, num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("num1 is Largest \n");
    }
    else if (num2 > num1 && num2>num3)
    {
        printf("num2 is Largest \n");
    }
    else
    {
        printf("num3 is Largest \n");
    }
    return 0;
}