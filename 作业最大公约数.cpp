#include <stdio.h>
int main ()
{
	int a,b,c,count;
	printf ("������һ��������");
	scanf ("%d", &a);
	scanf ("%d", &b);
	if (a>0&&b>0)
	{
		c=(a>b)?a:b;//ѡ���������нϴ����
		a=(a<b)?a:b;//ѡ���������н�С����
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
		printf ("����������������Լ��Ϊ%d��\n", count);
	}
	else printf ("����������Ǵ����\n");
	return 0;
}
