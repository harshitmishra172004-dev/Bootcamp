#include<iostream>

int main(){
    int r, c;
    printf("Enter no. of rows:");
    scanf("%d",&r);

    printf("Enter no.of columns:");
    scanf("%d",&c);

    printf("Enter no. elements:");
    int mat[r][c];
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&mat[i][j]);
    printf("\n");
 
    int max=0;
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    if(max < mat[i][j]){
        max= mat[i][j];
    }
    printf("Largest Element in mattrix is:%d",max);
    return 0;
}