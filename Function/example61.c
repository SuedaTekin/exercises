#include <stdio.h>
#include <stdlib.h>

int main(void){
	//Define new data type boolean 
	enum boolean{
		false=0,
		true=1
	};
	// Now define a variable with new data type boolen
	
	enum boolean isTrue;
	isTrue = true;
	if(isTrue == true)
		printf("True\n");
		
	return 0;
}
