#include <stdio.h>
#include <stdlib.h>

int strLenght(char str[]);

void strReverse(char str[],int len);

int main(void){
	char s[40];
	int len=0;
	
	/*read array*/
	
	printf("white something :");
	gets(s);
	// find the length of the string
	len=strLength(s);
	// reverse the array
	
	strReverse(s,len);
	printf("\n the string lenght:%d\n",len);
	printf("\n Reverse:%s\n",s);
	return 0;
}
int strLength(char str[]){
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}
void strReverse(char str[],int len){
	char temp;
	int i=0,i<len/2;
	for(int i=0;i<len/2;i++){
		temp=str[len-1-i];
		str[len-1-i]=str[i];
		str[i]=temp;
	}
}





