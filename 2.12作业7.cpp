#include <stdio.h>
void one_three ();
void tow ();
int main (void)
{
	printf ("staring now:\n");
	one_three ();
	printf ("done!\n");
	return 0;
}
void one_three (void)
{
	printf ("one\n");
	tow ();	
	printf ("three\n");
}
void tow (void)
{
	printf ("tow\n");
}