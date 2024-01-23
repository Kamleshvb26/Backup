#include<stdio.h>

void selectionSort(int arr[], int s){
    
    for (int i = 0; i < s-1; i++)
    {
        int mn=i;
        for (int j = i+1; j < s; j++)
        {
            if(arr[mn]>arr[j]){
                mn=j;
            }
        }
        int tmp=arr[i];
        arr[i]=arr[mn];
        arr[mn]=tmp;
        
    }
    

}

int main(){

    int arr[]={2,4,6,7,8,33,57,87};
    int size=sizeof(arr)/sizeof(int);

    selectionSort(arr,size);

    printf("output :\n");
    return 0;
}