#include <stdio.h>
#include <stdlib.h>

void prn_heading(void)
{
	printf("\n::: A TABLE OF POWERS :::::\n\n");
}

void prn_tbl_of_powers(int n)
{
	int i,j;
	
	for(i=1; i<=n; ++i){
		for(j=1; j<=n; ++j){
		if(j==1)
			printf("%ld",power(i,j));
		else 
			printf("%9ld",power(i,j));
		putchar('\n');}
	}
}
