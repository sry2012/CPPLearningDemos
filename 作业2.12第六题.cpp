#include <stdio.h>
void Smile ();
int main ()
{
    Smile (); Smile (); Smile (); putchar ('\n');
	Smile (); Smile (); putchar ('\n');
	Smile (); putchar ('\n');
	return 0;
}
void Smile ()
{
	printf ("Smile!");
}