#include <stdio.h>
#include <time.h>

/* Klavyeden binary olarak girilen bir sayýnýn decimal sayý sistemine çeviren fonksiyonu ve C programýný yazýnýz. */

int bin_dec(int N);
int main(){
	int sayi;
	printf("Binary bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("%d = %d\n",sayi,bin_dec(sayi));
	return 0;
}
int bin_dec(int N){
	int sonuc=0,i=0,islem_sayisi;
	do{
		islem_sayisi=N % 10;
		N = N/10;
		sonuc +=islem_sayisi*pow(2,i);
		i++;
	}while(N != 0);
	return sonuc;
	
}
