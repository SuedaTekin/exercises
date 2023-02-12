 #include <stdio.h>
#include <stdlib.h>

int adet(char metin[100]){
	int i,adet;
	for(i=0;metin[i]!='\0'; i++)
	{
		adet++;
	}
	return adet;
}
char tersten(char text[100]){
	int i;
	int n=strlen(text);
	for(i=0;i<n;i++)
	{
		printf("%c",text[n-i-1]);
	}
	return text;
}
int main(){
	char metin[100];
	printf("Metni giriniz: ");
	gets(metin);
	printf("\nMetin boyutu:%d\n",adet(metin));
	printf("Metnin tersten hali:");
	tersten (metin);
}
