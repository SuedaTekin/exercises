#include <stdio.h>
#include <stdlib.h>

/* Girilen karakterin uzunlušunu bulan program */

int main() {
	
	char ad[10];
	printf("Karakter giriniz:"); scanf("%s",ad);
	
	printf("Girilen karakterin uzunlugu=%d",strlen(ad));
	return 0;
}
