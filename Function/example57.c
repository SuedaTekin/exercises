#include <stdio.h>
#include <stdlib.h>
/*Bir dikdörtgenin çevresi ve alanýný hesaplayan bir
fonksiyon yazýnýz.*/
void dortgen(int a,int b,int *alan,int*cevresi);

int main()
{
	int x,y;
	int alan,cevresi;
	printf("Boslukla ayrilmis iki deger giriniz:");
	scanf("%d %d",&x,&y);
	dortgen(x,y,&alan,&cevresi);
	printf("Alani %d ve cevresi %d dir\n",alan,cevresi);
}
void dortgen(int a,int b,int *alan,int *cevresi)
{
	*alan=a*b;
	*cevresi=2*(a+b);
}
