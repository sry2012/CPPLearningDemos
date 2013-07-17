#include <stdio.h>
#include <float.h>
int main (void)
{
	float fl;
	double db;
	fl= 1.0/ 3.0;
	db = 1.0 / 3.0;
	printf ("%.4f   %.4lf\n", fl, db);
	printf ("%.12f  %.12lf\n", fl, db);
	printf ("%.16f  %.16lf\n", fl, db);
	printf ("FLT_DIG = %f, DBL_DIG = %lf\n", FLT_DIG, DBL_DIG);
	return 0;
}


