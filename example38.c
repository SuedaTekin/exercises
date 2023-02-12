#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int matris[4][3];{{67,76,55},{34,79,76},{56,68,57},{66,89,65}};
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("sayi giriniz:"); scanf("%d",&matris[i][j]);
			
		}
	}
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d",matris[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
