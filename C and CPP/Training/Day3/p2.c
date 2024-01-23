#include <stdio.h>

int fact(int n)
{
    int prod = 1;

    for (int i = 1; i <= n; i++)
    {
        prod *= i;
    }

    return prod;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{

    int n, r;
    printf("Enter a numbers :");
    scanf("%d%d", &n, &r);
    if (r > n)
    {
        printf("Invalid input\n");
    }
    else if (n == r)
    {
        printf("nCr is :%d\n", 1);
    }
    else
    {

        int ans = nCr(n, r);
        printf("nCr is :%d\n", ans);
    }

    return 0;
}
