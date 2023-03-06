#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a = 10;

void fonk1(void)
{
	a = 40;
	printf("a = %d\n",a);
}

int main() {
	int a;
	a = 30;
	printf("a = %d\n",a);
	fonk1();
	printf("a = %d\n",a);
	return 0;
}
