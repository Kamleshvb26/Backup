#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isPalindrome(char s[])
{
    int l = 0, r = strlen(s) - 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

int isArmstrong(int n)
{
    int rem;
    int sum = 0;
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum += pow(rem,3);
        n /= 10;
    }
    return sum == temp;
}

int fact(int n)
{
    int prod = 1;
    for (int i = 1; i <= n; i++)
    {
        prod *= i;
    }
    return prod;
}

int reverse(int n)
{
    int rem;
    int rev = 0;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}

int isPrime(int n){
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}



int main()
{

    printf("Welcome \n\n");

    int choice, n, ans;
    while (1)
    {


        printf("Enter 1 for Palindrome\n");
        printf("Enter 2 for Armstrong number\n");
        printf("Enter 3 for Reverse a number\n");
        printf("Enter 4 for Check prime\n");
        printf("Enter 5 for Factorial of number\n");
        printf("Enter 6 for Exit  \n\n");

        printf("Make a choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nYou opted for Palindrome \n");

            printf("Enter string :");
            char s[100];
            scanf("%s", s);
            if (isPalindrome(s))
            {
                printf("Palindrome\n");
            }
            else
            {
                printf("Not Palindrome\n");
            }

            break;
        case 2:

            printf("You opted for Armstrong number\n");

            printf("Enter number :");
            scanf("%d", &n);
            if (isArmstrong(n))
            {
                printf("Armstrong\n");
            }
            else
            {
                printf("Not Armstrong\n");
            }

            break;
        case 3:
            printf("You opted for Reverse a number \n");

            printf("Enter number :");
            scanf("%d", &n);
             ans = reverse(n);
            printf("Reverse :%d\n", ans);

            break;
        case 4:
            printf("You opted for Check prime \n");

            printf("Enter number :");
         
            scanf("%d", &n);
            if (isPrime(n))
            {
                printf("Prime\n");
            }
            else
            {
                printf("Not prime\n");
            }

            break;
        case 5:
            printf("You opted for Factorial of number \n");

            printf("Enter number :");
           
            scanf("%d", &n);
             ans = fact(n);
            printf("Factorial is :%d\n", ans);

            break;
        case 6:
            printf("You opted to Exit, Thank You ..! \n");
            exit(0);

        default:
            printf("Please enter valid choice ");
            break;
        }

        printf("\n\n");
    }

    return 0;
}