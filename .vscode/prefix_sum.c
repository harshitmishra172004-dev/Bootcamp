#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[50];
    int prefix[50];
 
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    prefix[0]=0;
    for(int i=0;i<=n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int r, l,sum;
    for(int i=0;i<n;i++){
         sum= prefix[r] - prefix[l-1];
    }
    printf("%d",sum);
}