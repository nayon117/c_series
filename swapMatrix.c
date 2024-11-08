#include<stdio.h>

void col_swap (int arr[100][100],int r, int c, int colA,int colZ){
  for (int i = 0; i < r; i++){
    int temp = arr[i][colA];
    arr[i][colA] = arr[i][colZ];
    arr[i][colZ] = temp;
  }
}

void row_swap (int arr[100][100], int r, int c, int rowA, int rowZ) {
    for (int i = 0; i < c; i++) {
        int temp = arr[rowA][i];
        arr[rowA][i] = arr[rowZ][i];
        arr[rowZ][i] = temp;
    }
}

int main () {
  int r,c;
  scanf("%d %d",&r,&c);

  int mat[100][100];

  for (int i = 0; i < r; i++){
    for (int j = 0; j < c; j++){
      scanf("%d",&mat[i][j]);
    }
  }

  col_swap(mat,r,c,0,c-1);
  row_swap(mat,r,c,0,r-1);

  for (int i = 0; i < r; i++){
    for (int j = 0; j < c; j++){
      printf("%d ",mat[i][j]);  
    }
    printf("\n");
  }

  return 0;
}

