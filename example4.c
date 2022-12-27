#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int n;
	while(1){
		printf("bir sayi gir(durmak için 0):");
		scanf("%d",&n);
		if (n==0)
		break;
		printf("n=%d,n*n*n*=%d\n",n,n*n*n);
		
	}
	
	
	return 0;
}
