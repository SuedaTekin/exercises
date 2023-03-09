#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int f(int n)
{
	if(n==0)
	return 0;
	f(n-1);
	printf("%d\n",n);
}
int main(void)
{
	int sayi=5;
	f(sayi);
	return 0;
}
