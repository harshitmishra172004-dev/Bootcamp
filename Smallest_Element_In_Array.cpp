#include<iostream>


int main(){
    int n ,i;
    printf("Enter no. of element:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min= arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
    printf("Smallest Element In An Array:%d ",min);
    return 0;
}