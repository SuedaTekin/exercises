#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int A[4][5]={{1,67,76,55,0},{2,34,79,76},{3,56,68,57,0},{4,66,89,65,0}};
	
	int i=0,j=0,sum=0;
	
	for(i=0;i<4;i++){
	for(j=0;j<5;j++){
		printf("%d ",A[i][j]);
	}
	printf("\n");
	}
	for(i=0; i<4;i++){
			sum=0;
	for(j=1;j<4;j++){
		sum=sum+A[i][j];
	}
	A[i][j]=sum/3;
	printf("Average of student %d=%d\n",i+1,A[i][j]);
	}
	int max=0,maxld=0;
	for(i=0;i<4;i++){
		if(A[i][j]>max){
			max=A[i][j];
			maxld=A[i][j];
		}
	}
	printf("Highest average: %d higest ID:%d",max,maxld);
	
	return 0;
}
