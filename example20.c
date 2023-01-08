#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i;
	int dizi[5],toplam=0;
	printf("5 adet sayi giriniz :\n");
	for( i=0; i<=4; i++)
	{
		printf("%d sayi :",i+1); scanf("%d",&dizi[i]);
		toplam=toplam+dizi[i];
	}
	printf("Toplam =%d",toplam);
	
	
	return 0;
}
