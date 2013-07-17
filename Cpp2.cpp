#include <stdio.h>
int main ()
{
	int c=98;
	int a=63;
	int count,b;
    count=c%a;
	while (count!=0);
	{
		b=c-a;
		count=a%b;
		if (count!=0)
		{
			c=a;
			a=b;
		}
	}
	printf ("%d", count);
	return 0;
}
