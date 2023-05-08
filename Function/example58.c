#include <stdio.h>

#include <conio.h>

/*Aþaðýda verilen prototipi kullanarak strlen fonksiyonuna
benzer bir fonksiyon yazýnýz.
int uzunluk(char *)*/

int uzunluk(char *);

int main()
{
	char str[100];
	printf("Enter string");
	gets(str);
	printf("Length of string: %d",uzunluk(str));
	getch();
}

