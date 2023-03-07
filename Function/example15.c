#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a=1,b=2;
c=3;

int f(void);
int main(void){
	printf("%3d\n",f());
	printf("%3d%3d%3d\n",a,b,c);
	
	return 0;
}
int f(void){
	extern a;
	int b,c;
	b = c = a;
	return (a+b+c);
}
