#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
	if (n==0)
		return 0;
		
	f(n-1);
	printf("%d\n",n);
}
int main(void)
{
	int sayi=10;
	f(sayi);
	return 0;
}
