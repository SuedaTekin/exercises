#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a;

void fonk1(void)
{
	a = 20;
}

int main() 
{
	a = 10;
	printf("a = %d\n",a);
	fonk1();
	printf("a = %d\n",a);
	
	return 0;
}
