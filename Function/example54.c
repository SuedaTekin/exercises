#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*ENTER tuþuna basýlana kadar sürekli olarak klavyeden
girilen karakterleri alan ve her bir karakter için ekrana ‘*’
basan bir program yazýnýz.*/
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

