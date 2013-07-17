#include <stdio.h>
double power (double n, int p);
int main ()
{
	double x,xpow;
	int exp;
	printf ("Enter a number and the positive integer power");
	printf (" to which\nthe number will be raised. Enter q");
	printf (" to quit.\n");
	while (scanf ("%lf%d",&x, &exp)==2)
	{
		xpow=power (x, exp);
		printf ("%.3g to the power %d is %.5g\n", x,exp, xpow);
		printf ("Enter next pair of numbers or q to quit.\n");
	}
	printf ("Hope you enjoyed this powr trip--bye!\n");
	return 0;
}
double power (double n, int p)
{
	int i;
	double pow=1;
	if (n==0)
		pow=0;
	else if (p==0)
		pow=1;
	else if (p>0)
	{
		for (i=1;i<=p;i++)
			pow*=n;
	}
	else if (p<0)
	{
		p=-p;
		for (i=1;i<=p;i++)
			pow*=n;
		pow=1/pow;
	}
	return pow;
}

