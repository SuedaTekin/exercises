#include <stdio.h>
#include <stdlib.h>

/* kullanýcýdan girilen isimleri yazdýran karakter dizisi */

int main() {
	int i;
	char isim[10][20]; int n;
	printf("Kac adet isim girilecek? :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("%d. isim : ",i+1);
		scanf("%s",&isim[i]);
	}
	
	printf("\n\nIsimler\n");
	for(i=0; i<n; i++)
	{
			printf("%s\n",isim[i]);
	}
	return 0;
}
