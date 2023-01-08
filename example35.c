#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* strlen fonksiyonu */

int main() {
	
	char k_adi[10];
	printf("kullanici adiniz :"); scanf("%s",&k_adi);
	if(strlen(k_adi)<8)
	{
		printf("Kullanici adiniz en az 8 karakterli olmalidir");
	}
	else
	{
		printf("Kayit basarili %s",k_adi);
	}
	
	return 0;
}
