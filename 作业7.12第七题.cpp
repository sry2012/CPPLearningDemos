#include <stdio.h>
#define HOURSALARY 10.00
int main (void)
{
	float wage,time,income,tax;
	printf ("�����빤����ʱ�䣺");
	scanf ("%f", &time);
	if (time<=40)
		wage=time*HOURSALARY;
	else wage=(40*HOURSALARY)+((time-40)*1.5*HOURSALARY);
	if (wage<=300)
		tax=wage*0.15;
	else if (wage<=450)
		tax=300*0.15+(wage-300)*0.20;
	else tax=300*0.15+150*0.20+(wage-450)*0.25;
	income=wage-tax;
	printf ("�����ܶ�$%.2f��˰��$%.2f��������$%.2f��\n", wage, tax,income);
	return 0;
}
