#include <stdio.h>
int main ()
{
	int salary, income, days, time;
	salary = 0;
	time = 0;
	income = 0;
	printf ("���乤����������");
	scanf ("%d", &days);
	while (time<days)
	{
		time = time +1 ;
		salary = time*time;
		income = income+salary;
	}
	printf ("��%d���ﹲ׬��%dԪ��\n", days, income);
	return 0;
}

