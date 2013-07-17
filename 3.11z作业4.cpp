#include <stdio.h>
int main ()
{
	printf ("请输入一个数：");
	double a;
	scanf ("%lf", &a);
	
	printf ("The input is %lf or %e.\n", a, a);
	return 0;
}