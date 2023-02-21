#include <stdio.h>
#include <stdbool.h>

int main() {
  int i, j, k;
  bool flag;
  
  for (i = 1; i <= 9; i++) {
    for (j = 0; j <= 9; j++) {
      for (k = 0; k <= 9; k++) {
        flag = true;
        
        if (i == j || i == k || j == k) {
          flag = false;
        }
        
        if (flag == true) {
          printf("%d%d%d\n", i, j, k);
        }
      }
    }
  }
  
  return 0;
}

