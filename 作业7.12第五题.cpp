#include <stdio.h>
int main (void)
{
	int input,count,count2,num;
	double sum,sum2;
	sum=sum2=0;
	count=count2=0;
	printf ("请输入一个整数：");
	scanf ("%d", &input);
	while (input!=0)
	{
		num=input%2;
		switch (num)
		{
		case 0:
			{
				count+=1;
				sum+=input;
			} break;
		case 1:
			{
				count2+=1;
				sum2+=input;
			} break;
		}
		printf ("请输入一个整数：");
		scanf ("%d", &input);
	}
	printf ("输入的偶数中有%d个，平均数为%lf，奇数有%d个，平均数为%lf。\n", count,double(sum/count),count2,double(sum2/count2));
	return 0;
}
