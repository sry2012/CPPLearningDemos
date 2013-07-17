#include <stdio.h>
#define ROWS 6
int main (void)
{
	int row;
	char ch;
	for (row=0;row<ROWS;row++)
	{
		for (ch='F';ch>'F'-1-row;ch--)
			printf ("%c",ch);
		printf ("\n");
	}
	return 0;
}
