#include <stdio.h>
#include <stdlib.h>

/* Klavyeden negatif bir değergirilinceye kadar kullanıcıdan sürekli sayı isteyen C programını fonksiyon kullanarak yazınız. */

void sayi_iste();
int main(){
	sayi_iste();
	return 0;
}
void sayi_iste(){
	int sayi;
	while(1){
		printf("Bir sayi giriniz:");
		scanf("%d",&sayi);
		if(sayi<0){
			break;
		}
	}
}
