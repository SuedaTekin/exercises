#include <stdio.h>
#include <stdlib.h>
/* N pozitif tam say�s�ndan 0'a kadar olan say�lar� ekrana yazd�ran C program�n� rek�rsif fonksiyon kullanarak yaz�n�z. */


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
