#include <stdio.h>
#include <math.h>
int main (void)
{
	int limite, num, num2;
	float sum, count;
	sum=0.;
    count=0.;
	printf ("请输入项的个数：");
	scanf ("%d", &limite);
	for (num=0; num<limite;num++)
	{
		num2=pow(-1,num);
		sum =sum+num2*(1.0/(count+1.0));
		count+=1;
	}
	printf ("%f\n", sum);
	return 0;
}
