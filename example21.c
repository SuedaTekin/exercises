#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*10 kiþilik sýnýfýn ortalamasýný bulan program */ 
int main() {  
int i;
int ogr_notu[10],toplam=0;
for( i=0; i<10;i++)
{
	printf("%d. ogrencinin notu :",i+1); scanf("%d",&ogr_notu[i]);
	toplam+=ogr_notu[i];
}
float sonuc=toplam/10;
printf("Sinif ortalamasi = %.2f",sonuc);

	return 0;
}
