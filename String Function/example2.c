#include <stdio.h>
#include <stdlib.h>

int main(){
	char cumle[100];
	int i=0;
	printf("Bir cumle giriniz:");
	gets(cumle);
	while(cumle[i]){
		i++;
	}
	printf("Girilen cumledki karakter sayisi:%d\n",i);
	return 0;
	
}
