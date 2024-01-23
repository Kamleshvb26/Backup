#include <stdio.h>

int main()
{

    int f = 0;
    int s = 1;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("0\n");
    }
    else if (n == 2)
    {
        printf("0 1\n");
    }
    else
    {
        printf("0 1 ");
        int sum;
        for(int i=0;i<n-2;i++){
            sum=f+s;
            f=s;
            s=sum;
            printf("%d ",sum);

        }
        printf("\n");
    }
    return 0;
}