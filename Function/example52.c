#include <stdio.h>
#include <stdlib.h>

int kare(int);
int kup(int);
int main(void)
{
	int (*islem)(int);
	int i;
	char c;
	
	printf("1-kare alani\n2_kup hacmi\n");
	c=getchar();
	printf("\nSayisi gir:");
	scanf("%d",&i);
	if(c=='1')
		islem=kare;
	else
	 	islem=kup;
	printf("Sonuc=%d\n",islem(i));
	while(getchar() !='\n'){/*do nothing*/};
	    getchar();
}
int kare(int s)
{
	return s*s;
}
int kup(int s)
{
	return s*s*s;
}
