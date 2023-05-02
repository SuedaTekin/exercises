#include <stdio.h>
#include <stdlib.h>

int main(){
	char cumle[100];
	int i,j,say=0;
	printf("Cumle giriniz:");
	gets(cumle);
	for(i=0;cumle[i];i++){
		printf("%c",cumle[i]);
		if(cumle[i]==32){
			printf("\n");
			say++;
			for(j=0;j<say;j++){
				printf("\t");
			}
		}
	}
	return 0;
}
