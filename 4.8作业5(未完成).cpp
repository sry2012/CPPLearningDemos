#include <stdio.h>
#include <string.h>
int main ()
{
	int letter, letter2;
	char name[40], family_name[40];
	printf ("What's your name?\n");
	scanf ("%s", name);
	printf ("What's your family name?\n");
	scanf ("%s", family_name);

    
	printf ("%s %s\n", name, family_name);
	return 0;
}
