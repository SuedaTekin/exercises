#include <stdio.h>
#include <stdlib.h>

int bolme_islemi(int, int, int *);
int main(void)
{
	int bolunen,bolen;
	int bolum,kalan;
	bolunen=147;
	bolen=4;
	bolum=bolme_islemi(bolunen, bolen,&kalan);
	printf("Bolum:%d Kalan:%d\n",bolum,kalan);
	getchar();
	
	return 0;
}
int bolme_islemi(int bolunen,int bolen,int *kalan)
{
	*kalan=bolunen % bolen;
	return bolunen / bolen;
}
