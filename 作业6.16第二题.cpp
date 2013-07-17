#include <stdio.h>
#define ROWS 5
#define CNT 5
int main (void)
{
	int row, time;
	for (row=0; row<ROWS;row++)
	{
		for (time=4-row; time<CNT; time++)
		     printf ("$");
		printf ("\n");
	}
	return 0;
}