#include <stdio.h>
#include <stdlib.h>

void arttir(int);
int main(void)
{
	int i;
	i=5;
	printf("oncesi %d\n",i);
	arttir(i);
	printf("sonrasi %d\n",i);
	getchar();
	
	return 0;
}

void arttir(int k)
{
	k++;
}
