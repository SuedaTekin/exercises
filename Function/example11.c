#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a = 10;

void fonk1(int a)
{
	a = 40;
	printf("a = %d\n",a);
}

int main() 
{
	printf("a = %d\n",a);
	fonk1(a);
	printf("a = %d\n",a);
	return 0;
}
