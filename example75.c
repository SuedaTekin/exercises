#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void insertionSort(int dizi[],int n)
{
int ekle,k,i;
for(i=1; i<n;i++)
{
	ekle=dizi[i];
	for(k=i-1; k >= 0 && ekle <= dizi[k];k--)
		dizi[k+1] = dizi[k]; //Geriye kayd�rma
	dizi[k+1]=ekle;	//Uygun yer bo�alt�ld� eklendi
	}
}



