#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen pozitif bir N tamsayýsýna kadar olan tek sayýlarý ekrana listeleyen C programýný fonksiyon kullanarak yazýnýz. */

void teksayilar(int N);
int main(){
	int sayi;
	printf("Pozitif bir tamsayi giriniz:");
	scanf("%d",&sayi);
	teksayilar(sayi);
	return 0;
}
void teksayilar(int N){
	int i=0;
	while(i <= N){
		if(i % 2 == 1){
			printf("%d \n",i);
			i++;
		}
i++;		
	}
}

