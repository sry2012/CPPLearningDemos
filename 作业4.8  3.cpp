#include <stdio.h>
int main ()
{
	float input;
	printf ("请输入一个浮点数：");
	scanf ("%f", &input);
	printf ("The input is %f or %e.\n", input, input );
	return 0;
}
