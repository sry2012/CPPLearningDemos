#include <stdio.h>
int main ()
{
	int salary, income, days;
	salary = 0;
	income = 0;
	printf ("���乤����������");
	scanf ("%d", &days);
	while (salary<days)
	{
		salary = salary+1;
		income = income+salary;
	}
	printf ("��%d���ﹲ׬��%dԪ��\n", days, income);
	return 0;
}

