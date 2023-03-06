#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen iki tamsayýdan büyük olanýný fonksiyon kullanarak bulan C programýný yazýnýz. */

int buyuk(int,int);
int main(){
	int sayi1,sayi2,sonuc;
	printf("iki adet tamsayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	sonuc=buyuk(sayi1,sayi2);
	if(sonuc==1){
		printf("%d > %d\n",sayi1,sayi2);
	}else if(sonuc==0){
		printf("%d > %d\n",sayi2,sayi1);
		}else{
		printf("%d = %d\n",sayi1,sayi2);
		}
	return 0;
}
int buyuk(int a,int b){
	if(a>b){
		return 1;
	}else if(a<b){
		return 0;
	}else{
		return 2;
	}
}


