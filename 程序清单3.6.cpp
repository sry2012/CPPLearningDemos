#include <stdio.h>
#include <inttypes.h>
int main (void)
{
	int16_t me16;

	me16 = 4593;
	printf ("Frist, assume int_16 is short: ");
	printf ("me16 = %hd\n", me16);
	printf ("Next, let's not make any assumptions.\n");
	printf ("instead, use a \"macro\" form inttypes.h: "); 
	printf ("me16 = %" PRId16 "\n", me16);
	return 0;
}
