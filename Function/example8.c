#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a=10;
	printf("a = %d\n",a);
	{
		int a=20;
		printf("a = %d\n",a);
	}
	printf("a = %d\n",a);
	return 0;
}
