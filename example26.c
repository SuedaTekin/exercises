#include <stdio.h>
#include <stdlib.h>

/*Karakter dizilerini yazdýran program  */

int main() {
	
	int i;
	char filmler[3][40]={"Dedemin Insanlari","Forrest Gump","Da Vinci's Demons"};
	
	for(i=0; i<3; i++)
	{
		printf("%s\n",filmler[i]);
	}
	
	return 0;
}
