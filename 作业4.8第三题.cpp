#include <stdio.h>
int main (void)
{
	float input;
	printf ("������һ����������");
	scanf ("%f", &input);
	printf ("The input is %f or %e.\n", input, input);
	printf ("The input is %e or %f.\n", input, input);
	return 0;
}