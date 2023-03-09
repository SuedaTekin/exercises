#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void func1();
void func2();
int a,b,c;

void main(){
	func1();
	a=10,b=20;
	c=a+b;
	printf("in main block a+b=%d\n",c);
	
}
func1(){
	func2();
	printf("in func1 a+b=%d\n",a+b);
	
}
func2(){
	printf("\n enter value of a and b:");
	scanf("%d%d",&a,&b);
}
