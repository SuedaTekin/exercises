#include <stdio.h>
#include <stdlib.h>

/* strlen fonksiyonu */

int main() {
	
	char ad[]="SUEDA";
	
	int uzunluk=strlen(ad);
	
	printf("%s ismi %d karakterden olusur.",ad,uzunluk);
	
	return 0;
}
