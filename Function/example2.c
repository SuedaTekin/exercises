#include <stdio.h>
#include <stdlib.h>

/* klavyeden girilen iki tamsay�n�n toplam�n�,fark�n�,�arp�m�n�,b�l�m�n� ger�ekle�tiren C program�n� fonksiyon kullanarak yaz�n�z. */

float dort_islem(float a,float b,char c);
int main(){
	float sayi1,sayi2;
	char islem;
	printf ("islem yap�lacak sayilari giriniz:");
	scanf("%f%f",&sayi1,&sayi2);
	printf("hangi islem yapilacak (+, -, *, /):");
	islem=_getche();
	printf("\nislemin sonucu: %.2f",dort_islem(sayi1,sayi2,islem));
	return 0;
	
}
float dort_islem(float a,float b,char c){
	if(c=='+'){
		return a+b;
	}else if(c=='-'){
		return a-b;
	}else if(c=='*'){
		return a*b;
	}else if(c=='/'){
		return a/b;
	}else{
		printf("Yanlis operator...");
	}
}
