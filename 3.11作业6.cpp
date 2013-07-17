#include <stdio.h>
int main ()
{
	float b=3.0e-23;
	int a, m, num;
	a = 950;
	printf ("请输入水的夸脱数：");
    scanf ("%d", &m);
	num = a/b;
	printf ("%e\n", num);
	return 0;
}

