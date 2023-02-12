#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gcd(int n,int d);
int max(int num1,int num2);
int Icm(int num1,int num2,int num3);

int main() {
	int number1;
	int number2;
	scanf("%d%d",&number1,&number2);
	
	int big,smal,result1,result2;
	if(max(number1,number2)==1)
	{
		big=number1;
		small=number2;
	}else
	{
		big=number2;
		small=number1;
	}
	
	result=gcd(big,small);
	result=Icm(number1,number2,result1);
	
	printf("result1=%d\n",result1);
	printf("result2=%d\n",result2);
	
	return 0;
}

	int max(int num1,int num2)
	{
		if(num1>num2)
			return1;
		else
			return2;			
	}
	
	int gcd(int n,int d)
	{
		int temp=n%d;
		printf("TEMP=%d\n",temp);
		while(temp!=0)
		{
			n=d;
			d=temp;
			temp=n%d;
			print("TEMP=%d\n",temp);
		}
		retun d;
	}
	int Icm(int num1,int num2,int num3)
	{
		return(num1*num2)/num3;
	}
