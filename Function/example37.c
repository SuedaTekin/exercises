#include <stdio.h>
#include <stdlib.h>

int fun(int a[],int n){
	int x;
	if(n==1)
      return a[0];
    else 
      x=fun(a,n-1);
    if(x > a[n-1])
      return x;
    else
      return a[n-1];

}
