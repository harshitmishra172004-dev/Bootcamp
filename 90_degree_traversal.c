#include<stdio.h>
int main(){

    int r,c;
    printf("Enter no.of rows:");
    scanf("%d",&r);

    printf("Enter no. of columns:");
    scanf("%d",&c);
    int a[r][c];
     printf("Enter matrix Elements:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    //transpose
for(int i=0;i<r;i++){
    for(int j=i+1;j<c;j++){ 
        int temp= a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
    }
}
//reverse

for(int i=0;i<r;i++){
    for(int j=0;j<c/2;j++){
        int temp=a[i][j];
        a[i][j]=a[i][c-j-1];
        a[i][c-j-1]=temp;
    }
}
//printing
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
return 0;
}