#include <stdio.h>
int main (void)
{
	int num, max, min, sum;
	sum=0;
	printf ("Enter lower and upper integer limits:");
	scanf ("%d  %d", &min, &max);
	for (;max>min;)
	{
		for (num=min;min<=num&&num<=max;num++)
		{
			sum=sum+(num*num);	
		}
		printf ("The sums of square of %d to %d is %d.\n", min, max, sum);
		printf ("Enter naxt of limits is:");
		scanf ("%d  %d", &min, &max);
		num=min;
		sum=0;
	}
	printf ("Done\n");
	return 0;
}
