#include <stdio.h>
int butler ();
int main (void)
{
	printf ("����");
	butler ();
	return 0;
}
int butler ()
{
	int n, n2, n3;
	n = 5;
	n2 = n * n;
	n3 = n * n2;
	printf ("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
}