#include <stdio.h>
#define N 4

void swap(int a[N][N]) {
  int i, j, temp;
  	for (i= 0; i < N; i++) {
    for (j = 0; j < N; j++) {
    
      if (i < j) {
        temp= a[i][j];
        a[i][j] =a[j][i];
          a[j][i]=temp;
      }
    }
  }
}

void printArray(int a[N][N]) {
  int i, j;
  printf("Input Array:\n");
   
  for (i = 0; i < N; i++) {
   for (j = 0; j <N; j++)
      printf("%d ", a[i][j]);
    printf("\n");
  }
}


int main() {
  int i, j;
  int a[N][N] = {{ 1, 2, 3, 4}, { 5, 6, 7, 8}, { 9, 10, 11, 12},{ 13, 14, 15, 16}};

  printArray(a);
  swap(a);
  printf("\nOutput Array:\n");
  printArray(a);

  return 0;
}

