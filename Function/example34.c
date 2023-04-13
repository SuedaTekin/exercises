#include <stdio.h>
#include <stdlib.h>

long faktoyel(long n){
	if(n<=1)
			return 0;
	else
			return(n*faktoyel(n-1));
}
int main(void){
	int i;
	for(i=0;i<=10;i++){
		printf("%d!=%d\n",i,faktoryel(i));
	}
	return 0;
}
