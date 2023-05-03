#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *dizi;
	int eleman_sayisi;
	int i;
	printf("Eleman sayisini giriniz:");
	scanf("%d",&eleman_sayisi);
	dizi=(int *)malloc(eleman_sayisi * sizeof(int));
	
	for(i=0;i<eleman_sayisi;i++)
	printf("Adres:%d\tDeger:%d\n",&dizi[i],dizi[i]);
	
	free(dizi);
	
	while(getchar() !='\n'){/* do nothing*/};
		getchar();
		
	return 0;
}
