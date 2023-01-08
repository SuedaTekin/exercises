#include <stdio.h>
#include <stdlib.h>

/*Kullanýcý tarafýndan girilen 4 sayýnýn matris þeklinde yazdýran program*/

int main() {
	int i,j;
	int matris [2][2];
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
	{
		printf("sayi giriniz:");	scanf("%d",&matris[i][j]);
		
	}
	}
		printf("\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ",matris[i][j]);	
		}
		printf("\n");
	}
}
