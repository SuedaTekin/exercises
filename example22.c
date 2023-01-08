#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j;
	int matris[2][2]={{4,5},{6,7}};
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
return 0;
}
