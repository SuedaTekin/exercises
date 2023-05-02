#include <stdio.h>
#include <stdlib.h>

int main(){
	char kelime1[15],kelime2[15];
	printf("ilk kelimeyi giriniz:");
	gets(kelime1);
	printf("ikinci kelimeyi giriniz:");
	gets(kelime2);
	if(strcmp(kelime1,kelime2)==0){
		printf("Kelimeler aynidir.\n");
	}else{
		printf("Kelimeler farklidir.");
	}
	return 0;
}
