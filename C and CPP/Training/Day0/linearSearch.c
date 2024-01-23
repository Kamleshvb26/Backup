#include<stdio.h>

int linearSearch(int arr[], int s, int target){
    for (int i = 0; i < s; i++)
    {
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
    

}

int main(){

    int arr[]={2,4,6,7,8,33,57,87};
    int size=sizeof(arr)/sizeof(int);

    int ans=linearSearch(arr,size,88);

    printf("output :%d\n",ans);
    return 0;
}