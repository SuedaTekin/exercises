#include <stdio.h>
#define N 7

long power(int, int);
void prn_heading(void);
void prn_tbl_of_powers(int);

int main(void)
{
	prn_heading();
	prn_tbl_of_powers(N);
	return 0;
}
