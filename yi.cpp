#include <stdio.h>
int main ()
{
	int a, b, c, num;
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	num = b*b-4*a*c;
    printf ("%d\n", num);
	return 0;
}