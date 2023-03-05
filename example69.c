#include <stdio.h>

void sicaklik(int array[]){
	int i=0,j=0,a=0,b=0;
	int x;
	for(x=0;x<365;x++){
		if(array[x]>-25&&array[x]<-10)
		i++;
	else if(array[x]>-10&&array[x]<5)
		j++;
	else if(array[x]>5&&array[x]<20)
	    a++;
	else if(array[x]>20&&array[x]<35)
		b++;
	}
	printf("[-25,-10]=%d",i);
	printf("[-10,5]=%d",j);
	printf("[5,20]=%d",a);
	printf("[20,35]=%d",b);
}


