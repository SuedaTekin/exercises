#include <stdio.h>
#include <stdlib.h>

int main(){
	char cumle[200],aranan;
	int i,bulunan=0;
	printf("cumle gir:");
	gets(cumle);
	printf("Aranan karakter=");
	aranan=getche();
	for(i=0;cumle[i];i++){
		if(cumle[i] == aranan){
			bulunan++;
		}
	}
	printf("\n %c karakterinden %d adet var",aranan,bulunan);
	return 0;
}
