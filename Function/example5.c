#include <stdio.h>
#include <stdlib.h>

/* Klavyeden negatif bir de�ergirilinceye kadar kullan�c�dan s�rekli say� isteyen C program�n� fonksiyon kullanarak yaz�n�z. */

void sayi_iste();
int main(){
	sayi_iste();
	return 0;
}
void sayi_iste(){
	int sayi;
	while(1){
		printf("Bir sayi giriniz:");
		scanf("%d",&sayi);
		if(sayi<0){
			break;
		}
	}
}
