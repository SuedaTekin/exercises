#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int c,n;
	printf("ten random numbers in [1,100]\n");
	
	for(c=1;c<=10;c++)
	{
		n=rand()%100+1;
		printf("%d\n",n);
		
	}
	

	
	
	return 0;
}
