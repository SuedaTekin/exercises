#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int adet(char metin[100]){
	int i,adet;
	for(i=0; metin[i]!='\0';i++)
	{
		adet++;
	}
	return adet;
}
	char tersten(char text[100]){
		int i;
		int n=strlen(text);
		for(i=0; i<n; i++)
		{
			printf("%c",text[n-i-1]);
		}
		return text;
	}
		int main(){
			char metin[100];
			printf("metni giriniz:");
			gets(metin);
			printf("metin boyutu: %d\n",adet(metin));
			printf("Metnin tersten hali:");
			tersten(metin);
		}
