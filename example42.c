#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number=0,basamak=0,oncekiBasamak=0,sonuc=0;
	
	printf("Enter your student number:");
	scanf("%d",&number);
	
	while(number>0){
		basamak=number%10;
		sonuc==0?sonuc=basamak<oncekiBasamak?1:0:0;
		oncekiBasamak=basamak;
		number=number/10;
	}
	printf(sonuc==0?"True":"False");
	return 0;
}
