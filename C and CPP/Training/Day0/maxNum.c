#include<stdio.h>

int maxOfArray(int arr[], int s){
    
    
        int mx=arr[0];
        for (int j = 0; j < s; j++)
        {
            if(mx<arr[j]){
                mx=arr[j];
            }
        }
        
        register mx;
    
    

}

int main(){

    int arr[]={2,4,6,7,8,33,57,87};
    int size=sizeof(arr)/sizeof(int);

    int mx=maxOfArray(arr,size);

    printf("output :%d\n",mx);
    return 0;
}