#include<iostream>
using namespace std ;
int main(){
    int r ,c ;
    printf("Enter No. of rows:");
    cin>>r ;
    printf("Enter No. of columns:");
    cin>>c;

    int mat[r][c];
    printf("Enter matrix element:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    int add_row_column
}