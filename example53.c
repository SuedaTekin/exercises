#include <stdio.h>
#include <math.h>
int main(){
	get_banknotes(1280);
	return 0;
}
	 
int get_banknotes(int amount) {
  int i;
  int banknotes[4] = {100, 50, 20, 10};
  int count[4] = {0,0,0,0};
 
  for (i = 0; i < 4; i++) {
    count[i] = amount / banknotes[i];
    amount = amount % banknotes[i];
  }

  printf("100 TL banknotes: %d\n", count[0]);
  printf("50 TL banknotes: %d\n", count[1]);
  printf("20 TL banknotes: %d\n", count[2]);
  printf("10 TL banknotes: %d\n", count[3]);

}


