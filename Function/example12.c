#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen pozitif bir tamsayýnýn pozitif ya da negatif olduðunu fonksiyon kullanarak bulan C programýný yazýnýz.   */

int tekcift_kontrol(int);
int main(){
	int sayi,sonuc;
	printf("Pozitif bir sayi giriniz:");
	scanf("%d",&sayi);
	sonuc=tekcift_kontrol(sayi);
	if(sonuc==1){
		printf("%d sayisi tektir\n",sayi);
	}else{
		printf("%d sayisi cifttir\n",sayi);
	}
	return 0;
}
int tekcift_kontrol(int N){
	return N % 2;
}
