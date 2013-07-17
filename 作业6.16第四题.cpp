#include <stdio.h>
#define SPACE 4
#define ROWS 5
int main (void)
{
	int row, space;
	char ch;
	for (row=0; row<ROWS; row++)
	{
		for (space=0; space<SPACE-row; space++)
		{
			printf ("\ ");
		}
		for (ch='A'; ch<('A'+row+1); ch++)
			printf ("%c", ch);
	    for (ch='A'+row-1; ch>'A'-1; ch--)
			printf ("%c", ch);
		printf ("\n");

	
	}
	return 0;	
}
