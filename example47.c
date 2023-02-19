#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int student_number=2110204056;
	int size=0,i,j=0,k,temp;
	int number=student_number;
	
	while(number!=0)
	{
		size+=number%10;
		number/=10;
	}
	int arr[size];
	
	for(i=0;i<size;i++)
	{
		printf("Enter a number:");
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i<size;i++)
	{
		if(arr[i]%3==0)
		{
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			j++;
		}
	}
	
	printf("Final version of the array:");
	for(k=0;k<size;k++)
	printf("%d",arr[k]);
	
	return 0;
}
