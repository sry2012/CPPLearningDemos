#include <stdio.h>
#include <math.h>
int main (void)
{
	int limite, count;
	float num, sum;
	num=0.;
	sum=0.;
	printf ("请输入数列项的个数：");
	scanf ("%d", &limite);
	for (count=0;count<limite;count++)
	{
		sum=sum+1.0/(num+1.0);
		num+=1;
	}
	printf ("%f\n", sum);

	int limite2, count2;
	double num2,num3,sum2;
	sum2=0;num3=0;
	printf ("请输入第二个数列的项数：");
	scanf ("%d", &limite2);
	for (count2=0;count2<limite2;count2++)
	{
		num2=pow(-1,count2);
		sum2+=num2*(1.0/(num3+1.0));
		num3+=1.;
	}
	printf ("%lf\n",sum2);
	return 0;
	
}
