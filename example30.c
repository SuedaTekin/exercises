#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan alýnan sayýlarý sýrayan program */

int main() {
	
	int dizi[5],i,j,gecicibellek;
	
	for(i=0; i<5; i++)
	{
		printf("%d. sayiyi giriniz :" ,i+1);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				gecicibellek=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecicibellek;
			}
		}
	}
	
	printf("siralanis :");
	for(i=0; i<5; i++)
	{
		printf("%d ",dizi[i]);
	}
	
	
	return 0;
}
