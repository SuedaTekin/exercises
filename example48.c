#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 100
#define MAX_COLUMNS 100

double mean(double arr[], int size) {
  double sum = 0;
  int i;
  for ( i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum / size;
}

double stdDev(double arr[], int size) {
  double avg = mean(arr, size);
  double sum_diff_squared = 0;
  int i;
  for ( i = 0; i < size; i++) {
    double diff = arr[i] - avg;
    sum_diff_squared += diff * diff;
  }
  return sqrt(sum_diff_squared / size);
}

void matrixPrint(double matrix[][MAX_COLUMNS], int rows, int columns) {
	int i,j;
  for ( i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
      printf("%.2lf ", matrix[i][j]);
    }
    printf("\n");
  }
}

void columnStdDev(double matrix[][MAX_COLUMNS], int rows, int columns, double stdDevs[]) {
	int j,i;
  for ( j = 0; j < columns; j++) {
    double column[MAX_ROWS];
    for ( i = 0; i < rows; i++) {
      column[i] = matrix[i][j];
    }
    stdDevs[j] = stdDev(column, rows);
  }
}

int main() {
  double matrix[MAX_ROWS][MAX_COLUMNS];
  int rows,i,j, columns;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &columns);
  printf("Enter the matrix elements: \n");
  for ( i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
      scanf("%lf", &matrix[i][j]);
    }
  }
  
  printf("The matrix is: \n");
 
  matrixPrint(matrix, rows, columns);
  double stdDevs[MAX_COLUMNS];
  columnStdDev(matrix, rows, columns, stdDevs);
  printf("The standard deviations of columns are: \n");
  for ( j = 0; j < columns; j++) {
    printf("Column %d: %.2lf\n", j + 1, stdDevs[j]);
  }
  return 0;
}

