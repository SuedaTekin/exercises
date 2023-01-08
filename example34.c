#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Girilen ifadeyi tersten yazan program */

int main() {
	int i;
	char kitap[]="Da Vinci Sifresi";
	
	for(i=strlen(kitap); i>=0; i--)
	{
		printf("%c",kitap[i]);
    }
	
	return 0;
}
