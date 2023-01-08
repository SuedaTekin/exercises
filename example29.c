#include <stdio.h>
#include <stdlib.h>

/* Dizilerde sýralama */

int main() {
	
	int dizi[]={45,78,14,5,9,99},i,j,gecicibellek;
	
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			if(dizi[j]>dizi[j+1])
			{
					gecicibellek=dizi[j];
					dizi[j]=dizi[j+1];
					dizi[j+1]=gecicibellek;
			}
		}	
		
	}
	for(i=0; i<6; i++)
	{
		printf("%d ",dizi[i]);
	}
	
	return 0;
}
