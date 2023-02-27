#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int t=0;
	int k=9;
	int b=0;
	int numara,result,d;
	printf("numara gir");
	scanf("%d",&numara);
	while(numara>0){
		d=numara%10;
		t+=d;
		numara/=10;
		if(d%2==0&&d>b)
			b=d;
		else{
			if(d%2==1&&d<k)
				k=d;
		}
	}
	result=t/(b+k);
	printf("%d",result);
}
