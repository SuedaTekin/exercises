#include <stdio.h>
#include <stdlib.h>

int main(){
	char cumle[100];
	int i=0;
	printf("Bir cumle giriniz:");
	gets(cumle);
	while(cumle[i]){
		if(cumle[i]==32){
			printf("\n");
		}else{
			printf("%c",cumle[i]);
		}
		i++;
	}
	return 0;
}
