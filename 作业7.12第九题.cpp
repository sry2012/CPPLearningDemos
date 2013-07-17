#include <stdio.h>
#include <math.h>
int main (void)
{
	int input,num,div,count;
	count =0;
	printf ("请输入一个整数：");
	scanf ("%d", &input );
	for (num=1;num<input;num++)
	{
		for (div=2;div<int(sqrt(input));div++)
		{
			if ((num%div)==0)
				count+=1;
		}
		if (count==0)
			printf ("%d是质数。\n", num);

	}
	return 0;
}

