#include <stdio.h>

int main()
{

    int n;
    int notes[]={100,50,10,5,2,1};
    printf("Enter a number :");
    scanf("%d", &n);

    int ans=0; 
    int i=0;

    while(n!=0){
        ans+=n/notes[i];
        n=n%notes[i];
        i++;
    }

    printf("Minimum number of notes are :%d\n",ans);
    

    return 0;
}