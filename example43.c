#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int as,a;
	printf("saatlik icin 1 komisyon icin 2 ye basiniz \n");
	scanf("%d",&as);
	if(as==1){
		saatlik();
	}
	else if(as==2){
		kom();
	}
	else if(as!=1 && as!=2){
		hata();
	}
	
	return 0;	
}
int saatlik(){
	int h,wage;
	printf("saat yaziniz\n");
	scanf("%d",&h);
	if(h>40){
		wage=40*50+(h-40)*75;
	}
else{
	wage=h*50;
}
	printf("saatlik calisma ucreti %d",wage);
	
	return 1;
}
int kom(){
	float s,wage;
	scanf("%f",&s);
	
	wage=500+s*0.055;
	printf("%f",wage);
	
	return 0;
}
int hata(){
	
	printf("hatali sayi girildi");
	return 0;
}


