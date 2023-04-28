#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int *iptr;
	iptr=&i;
	*iptr=8;
	printf("i degiskeninin degeri %d\n",i);
	printf("iptr adresinin icerigi %d\n",*iptr);
	
	getchar();
	return 0;
}
