#include <stdio.h>
#include <stdlib.h>

int simpleInterest(int p, int r)
{
    printf("simple interest \n");
    return p * r;
}

int compoundInterest(int p, int r)
{
    printf("compound interest \n");

    return p + r;
}

int main()
{
    int p, r, ans;

    while (1)
    {
        printf("Enter 1 for simple interest \n");
        printf("Enter 2 for compound interest \n");
        printf("Enter 3 for Exit \n");
        int choice;
        printf("Enter choice :");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("Enter inputs :");

            scanf("%d%d", &p, &r);
            ans = simpleInterest(p, r);
            printf("Answer is :%d\n", ans);
            printf("\n\n");

            break;

        case 2:
            printf("Enter inputs :");
            scanf("%d%d", &p, &r);

            ans = compoundInterest(p, r);
            printf("Answer is :%d\n", ans);
            printf("\n\n");

            break;
        case 3:
            exit(0);

            break;
        }
    }

    return 0;
}