#include <stdio.h>
#include <stdlib.h>

void main(){
	int A[10];
	
	int *m, **k;
	m=A;
	printf("output 1: %d\n", *(m+2));
	
	*(m+3)+=4;
	m+=5;
	printf("output 2: %d\n", (m+2));
	m=&A[4];
	k=&m;
	printf("output 3: %d \n",*(*(k)-1));
	
	printf("output 4: %d\n",*k);
	
	m=m-2;
	printf("output 5: %d\n",*k);
}
