#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int asal_mi(int sayi) {
	
	int i;
	for( i=2 ; i<sayi ; i++ ){
	
	   if(sayi%i==0){
	   	return0;
	   }
	
}
	
	return 1;
}

int main(){
	
	int n;
	
	printf("Bir sayi giriniz:");
	
	scanf("%d",&n);
	
	if(asal_mi(n)==0){
		printf("Bu sayi asal sayi degildir.");
	}
	else {
		printf("Bu sayi asal sayidir.");
	}
	return 0;
}
