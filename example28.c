#include <stdio.h>
#include <stdlib.h>

/* dizilerde yer deðiþtirme */

int main() {
	
	int a=5,b=3;

	printf("oncesinde : a=%d,b=%d\n",a,b);

	int gecicibellek=a;
	a=b;
	b=gecicibellek;
 
 	printf("sonrasinda : a=%d,b=%d\n",a,b);
	
	return 0;
}
