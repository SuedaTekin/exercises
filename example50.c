#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*
1
1 2
1 2 3
*/

int i,j;
for(i=0;i<10;i++)
{
	for(j=0;j<i+1;j++)
	{
		printf("%d ",j+1);
	}
	printf("\n");
}	

	return 0;
}
