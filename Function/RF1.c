#include <stdio.h>
#include <stdlib.h>
/* N pozitif tam sayýsýndan 0'a kadar olan sayýlarý ekrana yazdýran C programýný rekürsif fonksiyon kullanarak yazýnýz. */


void listele(int sayi);
int main(){
	int N;
	printf("Bir tamsayi giriniz:");
	scanf("%d",&N);
	listele(N);
	return 0;
}
void listele(int sayi){
	if(sayi==0){
		printf("%d", sayi);
	}else{
		printf("%d ", sayi);
		listele(sayi-1);
	}
}
