#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int *iptr;
	i=5;
	iptr=&i;
	
	printf("i adresi    %p\n",&i);
	printf("iptr degeri %p\n", iptr);
	
	printf("i degeri     %d\n",i);
	printf("*iptr degeri %d\n",*iptr);
	
	
	return 0;
}
