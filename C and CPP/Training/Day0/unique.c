#include<stdio.h>

int unique(int arr[], int s){
    int ans=0;
    for (int i = 0; i < s; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}

int main(){

    int arr[]={2,3,5,7,8,2,5,3,7};
    int size=sizeof(arr)/sizeof(int);

    int ans=unique(arr,size);

    printf("Unique :%d\n",ans);
    return 0;
}