#include <stdio.h>
int main ()
{
	float a, b, c, f;
	printf ("������a =");
	scanf ("%f", &a);
    printf ("������b =");
    scanf ("%f", &b);
    printf ("������c ="); 
    scanf ("%f", &c);
	f =  b*b-4*a*c;
	printf ("%d.\n", f);
	return 0;
}

