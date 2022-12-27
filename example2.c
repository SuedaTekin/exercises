#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i;
	int n;
	int top=0;
	
	printf("n girin:");
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
	
	top += i;
	i++;
}

 	printf("toplam: %d",top);		
	return 0;
}
