#include <stdio.h>

int main()
{

    int Ram, Shyam, Ajay;
    printf("Enter Ages :");
    scanf("%d%d%d", &Ram, &Ram, &Ajay);
    if (Ram < Shyam && Ram < Ajay)
    {
        printf("Ram is Youngest \n");
    }
    else if (Shyam < Ram && Shyam < Ajay)
    {
        printf("Shyam is Youngest \n");
    }
    else
    {
        printf("Ajay is Youngest \n");
    }
    return 0;
}