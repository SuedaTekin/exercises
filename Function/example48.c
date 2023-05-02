#include <stdio.h>
#include <stdlib.h>

void increment(int *)
int main(void)
{
	int i;
	i=5;
	printf("oncesi %d\n",i);
	increment(&i);
	printf("sonrasi %d\n",i);
	getchar();
	 
	return 0;
}

void increment(int *k)
{
	(*k)++;
}
