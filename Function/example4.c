
#include <stdio.h>
#include <stdlib.h>

/* 1'den 10'a kadar her bir sayinin faktöriyelini fonksiyon kullanarak hesapalayan ve sonuçlatý ekrana listeyen C programýný yazýnýz. */

long faktoriyel(int);
int main(){
	int i;
	for(i=0; i<=10; i++){
		printf("%d!=%ld\n",i,faktoriyel(i));
	}
	return 0;
}

long faktoriyel(int n){
	int i;
	long sonuc=1;
	for(i=1; i<=n; i++){
		sonuc=sonuc*i;
	}
	return sonuc;
}
