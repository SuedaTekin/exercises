#include <stdio.h>
#define N 3

void print_table(int arr[][N]) {
  int i, j;
  printf("Table:\n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int arr[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int i, temp;

  for (i = 0; i < N; i++) {
    temp = arr[i][N-i-1];
    arr[i][N-i-1] = arr[N-i-1][i];
    arr[N-i-1][i] = temp;
  }

  print_table(arr);
  return 0;
}

