#include<stdio.h>

int minOfArray(int arr[], int s){
    
    
        int mn=arr[0];
        for (int j = 0; j < s; j++)
        {
            if(mn>arr[j]){
                mn=arr[j];
            }
        }
        
        register mn;
    
    

}

int main(){

    int arr[]={2,4,6,7,8,33,57,87};
    int size=sizeof(arr)/sizeof(int);

    int mn=minOfArray(arr,size);

    printf("output :%d\n",mn);
    return 0;
}