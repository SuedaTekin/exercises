#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*ENTER tu�una bas�lana kadar s�rekli olarak klavyeden
girilen karakterleri alan ve her bir karakter i�in ekrana �*�
basan bir program yaz�n�z.*/
int main(){
	char giris[50];
	char *p;
	int i=0,k;
	p=giris;
	while (1){
		*(p+i)=getch();
		if(*(p+i)==13)
			break;
		putchar('*');
		printf("adres[%d]: %d\n",i,p+i);
		i++;
		
	}
	printf("\n");
	for(k=0;k<i;k++){
		printf("Adres[%d]: %d\n",k,p+k);
		putchar(*(p+k));
		
	}
	getchar;
	return 0;
}

