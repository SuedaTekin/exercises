#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

  int main(void)
{
int i;
 int dizi[5];
 printf("5 adet sayi giriniz :\n");
 for( i=0; i<=4;i++)
 {
 	printf("%d sayi :",i+1);scanf("%d",&dizi[i]);
 } 
 
for( i=0; i<=4; i++)
{
	printf("Dizinin %d. elemani =%d\n",i,dizi[i]);
	
}
return 0;
}

