#include <stdio.h>
#include <stdlib.h>

int main()
{
	double i;
	double *iptr;
	
	iptr=&i;
	printf("i boyutu: %d\n",sizeof(i));
	printf("iptr boyutu: %d",sizeof(iptr));
	

	return 0;
	
}
