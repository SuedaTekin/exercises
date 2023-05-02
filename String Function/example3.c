#include <stdio.h>
#include <stdlib.h>

int main(){
	char cumle[100];
	int i=0,j;
	printf("Bir cumle giriniz:");
	gets(cumle);
	while(cumle[i]){
		i++;
	}
	for(j=i-1;j>=0;j--){
		printf("%c",cumle[j]);
		
	}
	return 0;
}
