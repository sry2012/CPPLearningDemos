#define PI 3.1415927
#include <stdio.h>
double main ()
{
	double r, s;
	printf ("请输入半径r=");
	scanf ("%lf",&r);
	s = r * r * PI;
	printf ("那么半径为%lf的圆的面积是%lf.\n", r, s);
	return 0;
}
