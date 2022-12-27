#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int sayi;
    int us;
	int sonuc=0;
	
	
	printf("sayi girin:");
	scanf("%d",&sayi);
	
	printf("us giriniz:");
	scanf("%d",&us);
	
	for  (i=0;i<sayi;i++){
	
		sonuc =pow(sayi,us);
}
	printf("%d uzeri %d=%d",sayi,us,sonuc);
	
	return 0;
}
