#include <stdio.h>
int main (void)
{
	int input,count,count2,num;
	double sum,sum2;
	sum=sum2=0;
	count=count2=0;
	printf ("������һ��������");
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
		printf ("������һ��������");
		scanf ("%d", &input);
	}
	printf ("�����ż������%d����ƽ����Ϊ%lf��������%d����ƽ����Ϊ%lf��\n", count,double(sum/count),count2,double(sum2/count2));
	return 0;
}
