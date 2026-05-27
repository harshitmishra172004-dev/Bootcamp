#include<stdio.h>
int main(){

    int r,c;
    scanf("%d",&r);

    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j--){
            scanf("%d",&a[i][j]);
        }
    }
    //transpose
for(int i=0;i<n;i++){
    for(int j=0;j<c;j++){
        int temp= a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
    }
}
//reverse
for(int i=0;i<n;i++){
    for(int j=0;j<n/2;j++){
        int temp=a[i][j];
        a[i][j]=a[i][n-j-1];
        mat[i][n-j-1]=temp;
    }
}
//printing
for(int j=0;j<c;j++){
    for(int i=row-1;i>=0;i++){
        printf("%d",a[i][j]);
    }
}
return 0;
}