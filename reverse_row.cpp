#include<iostream>
using namespace std;

int main(){
  int r,c,i,j;
  printf("Enter no.of rows:");
   cin>>r;
  printf("Enter no. of columns:");
  cin>>c;
 

  int mat[r][c];
  printf("Enter matrix Elements:");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>mat[i][j];
    }
  }
  //reverse row from matrix
  int temp;
  for(int i=0;i<r;i++){
    int start = 0;
    int end = c-1;
    while(start < end){
      temp = mat[i][start];
      mat[i][start] = mat[i][end];
      mat[i][end] = temp;
      start++;
      end--;
    }
  }
  
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
