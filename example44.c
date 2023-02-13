#include <stdio.h>
#include <stdlib.h>
int main(){


int printTemperatureRanges(int temperatures[], int size) {
  int range1 = 0, range2 = 0, range3 = 0, range4 = 0, range5 = 0, range6 = 0, range7 = 0;
  int i;
  for ( i = 0; i < size; i++) {
    if (temperatures[i] >= -20 && temperatures[i] < -10) {
      range1++;
    } else if (temperatures[i] >= -10 && temperatures[i] < 0) {
      range2++;
    } else if (temperatures[i] >= 0 && temperatures[i] < 10) {
      range3++;
    } else if (temperatures[i] >= 10 && temperatures[i] < 20) {
      range4++;
    } else if (temperatures[i] >= 20 && temperatures[i] < 30) {
      range5++;
    } else if (temperatures[i] >= 30 && temperatures[i] < 40) {
      range6++;
    } else if (temperatures[i] >= 40) {
      range7++;
    }
    
  }
  
  printf("(-20,-10]: %d\n", range1);
  printf("(-10,0]: %d\n", range2);
  printf("(0,10]: %d\n", range3);
  printf("(10,20]: %d\n", range4);
  printf("(20,30]: %d\n", range5);
  printf("(30,40]: %d\n", range6);
  printf("(40,inf]: %d\n", range7);


 return 0;
}
}
