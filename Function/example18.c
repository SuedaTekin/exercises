#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int i;
	for(i=1;i<5;i++)
	start();
}

void start(){
	static int p=5;
	p=p+1;
	printf("p=%d\n",p);
}
