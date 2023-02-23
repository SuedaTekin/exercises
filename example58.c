#include <stdio.h>

#define N 4

void print_matrix(int mat[N][N]) {
  int i, j;
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
}

void swap_elements(int mat[N][N]) {
  int i, j, temp;
  for (i = 0; i < N; i++) {
    for (j = 0; j < i; j++) {
      temp = mat[i][j];
      mat[i][j] = mat[j][i];
      mat[j][i] = temp;
    }
  }
}

int main() {
  int mat[N][N] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  printf("Input matrix:\n");
  print_matrix(mat);
  swap_elements(mat);
  printf("\nOutput matrix:\n");
  print_matrix(mat);
  return 0;
}

