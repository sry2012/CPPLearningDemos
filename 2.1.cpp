#include <stdio.h>
void suy (void);
int main (void)
{
	suy ();
	return 0;
}
void suy (void)
{
	int n, n2, n3;
	n = 5;
	n2 = n * n;
	n3 = n * n2;
	printf ("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
}