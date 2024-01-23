#include <stdio.h>

int main()
{

    int lg = 1189, ss = 841;
    printf("Dimesnion of A(%d) is %d x %d\n", 0, lg, ss);

    for (int i = 1; i <= 8; i++)
    {
        int temp = lg / 2;
        if (temp > ss)
        {
            lg = temp;
        }
        else
        {
            lg = ss;
            ss = temp;
        }

        printf("Dimesnion of A(%d) is %d x %d\n", i, lg, ss);
    }

    return 0;
}