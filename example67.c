#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int t=2017010217052%25;
	int i=2;
	int j=0;

	while(i<9){
		int j=i;
		while(j<10){
			t=t+j+i;
			printf("%d",t);
			j=j+4;
		}
		printf("%d\n",j);
		i=i+3;
		t=t+j;
	}
	return 0;
}
