#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen pozitif bir tamsay�n�n pozitif ya da negatif oldu�unu fonksiyon kullanarak bulan C program�n� yaz�n�z.   */

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
