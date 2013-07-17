#include <stdio.h>
float main ()
{
	float a, b, h, s, x, z;
	printf ("请输入梯形的上底a =");
	scanf ("%f", &a);
	printf ("请输入梯形的下底b =");
	scanf ("%f", &b);
	printf ("请输入梯形的高h =");
	scanf ("%f",&h);
	x = a + b;
	z = h * 0.5;
	s = x * z;
	printf ("则上底是%f,下底是%f，高为%f的梯形的面积是%f\n", a, b, h, s);
	return 0;
}
