#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student std;

enum Department
{
    HR,
    PMT,
    FLM
};

typedef enum Department ED;

struct Student
{
    int roll;
    char name[50];
    float percentage;
    ED dp;
};



int main()
{

    int n, capacity = 0;

    printf("Enter number of students :");

    scanf("%d", &n);

    std *ptr = (std *)malloc(n * sizeof(std));

    for (int i = 0; i < n; i++)
    {

        printf("Enter roll number ");
        scanf("%d", &ptr[i].roll);
        printf("Enter name ");
        scanf("%s", ptr[i].name);
        printf("Enter percentage ");
        scanf("%f", &ptr[i].percentage);
        printf("Enter Department 0.HR 1.PMT 2.FLM ");
        scanf("%u", &ptr[i].dp);
        printf("\n\n");
    }

    printf("\n\nDisplaying All the Records \n\n");

    for (int i = 0; i < n; i++)
    {

        printf("Roll no : %d\n", ptr[i].roll);
        printf("Name :%s\n", ptr[i].name);
        printf("Percentage : %f\n", ptr[i].percentage);
        switch (ptr[i].dp)
        {
            case 0:
                printf("Department : HR");
                break;
            case 1:
                printf("Department : PMT");

                break;
            case 2:
                printf("Department : FLM");

                break;

            default:
                break;
        }

        printf("\n\n");
    }

    // for(int i=0;i<n;i++){
    //     if(ptr[i].roll==2){
    //         printf("Enter new nam");
    //         scanf("%s",ptr[i].name);
    //         ptr[i].percentage=94;
    //         break;
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        if (ptr[i].percentage > 90.0f)
        {
            printf("roll no %d : A Grade \n", ptr[i].roll);
        }
        else
        {
            printf("roll no %d : B Grade \n", ptr[i].roll);
        }
    }

    return 0;
}


// ELE,cosm,cloth

// p code,name,price,enum cate

// 3 prod

// accept
// search
// price range search 
// display with cat 
// dis start M