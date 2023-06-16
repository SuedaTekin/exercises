#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//Define new data type mainColors
	enum mainColors{
		Red,
		Blue,
		Yellow
	};
	//Define variable
	enum mainColors pixel;
	
	//Set value of pixel to blue
	//You can set Yellow or Red also.
	pixel=Blue;
	
	//Compare variable's value.
	if(pixel == Red)
			printf("Red pixel \n");
	else if ( pixel== Blue)
			printf("Blue pixel \n");
	else
			printf("Yellow pixel \n");
			
	return 0;
}
