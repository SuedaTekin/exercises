#include <stdio.h>
#include <stdlib.h>

//1'den N sayýsýna kadar olan sayýlarýn toplamýný bulan rekürsif fonksiyonunu yazýnýz//

int toplam(int n)
{
	if(n == 1)
		return n;
	else
		return (n+ toplam(n - 1));
}

int main(void)
{
	int sayi=10;
	printf("Sonuc = %d",toplam(sayi));
	return 0;
}
