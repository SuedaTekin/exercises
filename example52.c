#include <stdio.h>

int main() {
  int count = 0;
  int i;
  for ( i = 100; i <= 999; i++) {
    int a = i / 100;
    int b = (i / 10) % 10;
    int c = i % 10;
    if (a != b && a != c && b != c) {
      printf("%d\n", i);
      count++;
    }
  }
  printf("There are %d numbers that are different from each other.\n", count);
  return 0;
}

