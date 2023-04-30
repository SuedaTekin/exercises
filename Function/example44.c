#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,*iptr;
	double y,*yptr;
	
	iptr=&i;
	printf("iptr gosterdigi adres: %d \n",iptr);
	iptr ++;
	printf("iptr gosterdigi adres: %d \n\n",iptr);
	
	yptr=&y;
	printf("yptr gosterdigi adres: %d \n",yptr);
	yptr ++;
	printf("yptr gosterdigi adres: %d",yptr);
	
	getchar();
	return 0;
}
