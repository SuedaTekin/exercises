#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen bir tamsayinin faktöriyelini fonksiyon kullanarak hesaplayan C programýný yazýnýz. */

long faktoriyel(int);
int main(){
	int sayi;
	printf("Faktoriyeli alinacak sayiyi giriniz:");
	scanf("%d",&sayi);
    printf("%d!=%ld\n",sayi,faktoriyel(sayi));
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

