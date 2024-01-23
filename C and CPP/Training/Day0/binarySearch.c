#include<stdio.h>

int binraySearch(int arr[], int l, int r, int target){
    if(l>r){
        return -1;
    }
   int mid=l+(r-l)/2;

   if(arr[mid]==target){
    return mid;
   }

   if(arr[mid]<target){
        return binraySearch(arr,mid+1,r,target);
   }

    return binraySearch(arr,l,mid-1,target);
   

}

int main(){

    int arr[]={2,4,6,7,8,33,57,87};
    int size=sizeof(arr)/sizeof(int);

    int ans=binraySearch(arr,0,size-1,67);

    printf("output :%d\n",ans);
    return 0;
}