#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen iki tamsay�n�n toplam�n� fonksiyon kullanarak hespalayan C program�n� yaz�n�z. */

int topla(int a,int b);
int main(){
	int sayi1,sayi2;
	printf("iki adet tamsayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	printf("Sayilarin toplami:%d",topla(sayi1,sayi2));
	return 0;
}
int topla(int a,int b){
	return a+b;
}

