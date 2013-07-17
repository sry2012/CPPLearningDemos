#include <stdio.h>
int main ()
{
	float a;
	printf ("请输入a的值：");
	scanf ("%f", &a);
	printf ("输入的值可以记作%f或%e.\n", a, a);
	return 0;
}
