#include <stdio.h>
int main ()
{
	int a,b,c,count;
	printf ("请输入一对整数：");
	scanf ("%d", &a);
	scanf ("%d", &b);
	if (a>0&&b>0)
	{
		c=(a>b)?a:b;//选出两个数中较大的数
		a=(a<b)?a:b;//选出两个数中较小的数
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
		printf ("输入的两个数的最大公约数为%d。\n", count);
	}
	else printf ("输入的数据是错误的\n");
	return 0;
}
