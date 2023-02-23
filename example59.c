#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	void separateOddEven(int studentNum) {
  int oddCount = 0, evenCount = 0;
  int* oddArr = (int*)malloc(sizeof(int));
  int* evenArr = (int*)malloc(sizeof(int));
  
  while (studentNum > 0) {
    int digit = studentNum % 10;
    if (digit % 2 == 0) {
      evenCount++;
      evenArr = (int*)realloc(evenArr, evenCount * sizeof(int));
      evenArr[evenCount - 1] = digit;
    } else {
      oddCount++;
      oddArr = (int*)realloc(oddArr, oddCount * sizeof(int));
      oddArr[oddCount - 1] = digit;
    }
    studentNum /= 10;
  }
int i;
  printf("Odd digits: ");
  
  for (i = 0; i < oddCount; i++) {
    printf("%d ", oddArr[i]);
  }
  printf("\n");

  printf("Even digits: ");
  for (i = 0; i < evenCount; i++) {
    printf("%d ", evenArr[i]);
  }
  printf("\n");

  free(oddArr);
  free(evenArr);
}

