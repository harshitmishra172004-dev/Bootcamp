#include<stdio.h>
int main(){

    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    int arr[n];
    int prefix[n+1];
    printf("Enter Elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    prefix[0]=0;
    for(int i=0;i<=n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int r, l,sum;

    printf("Enter Range: \n");
    scanf("%d %d", &l, &r);
    for(int i=0;i<n;i++){
         sum= prefix[r] - prefix[l-1];
    }
    printf("%d",sum);
}