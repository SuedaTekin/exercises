#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	char * ilkBaharAylar[3]={"Mart","Nisan","Mayis"};
	char *yazAylar[3]={"Haziran","Temmuz","Agustos"};
	char *sonbaharAylar[3]={"Eylul","Ekim","Kasim"};
	char *kisAylar[3]={"Aralik","Ocak","Subat"};
	
	char **table[4];
	table[0]=ilkBaharAylar;
	table[1]=yazAylar;
	table[2]=sonbaharAylar;
	table[3]=kisAylar;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%s\n",table[i][j]);
			
		}
	}
	getchar();
	return 0;
}
