
#include <stdio.h>
#include <stdlib.h>

/* 1'den 10'a kadar her bir sayinin fakt�riyelini fonksiyon kullanarak hesapalayan ve sonu�lat� ekrana listeyen C program�n� yaz�n�z. */

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
