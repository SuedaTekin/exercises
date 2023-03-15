#include <stdio.h>
#include <stdlib.h>

void main(){

    register int i;
    char name[100];
    printf("enter a string:");
    gets(name);
    printf("the reverse of the string is:");

    for(i=strlen(name)-1;i>=0;i--)
        printf("%c",name[i]);

}
