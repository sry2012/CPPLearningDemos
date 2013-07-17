#include <stdio.h>
int main ()
{
	int salary, income, days;
	salary = 0;
	income = 0;
	printf ("请输工作的天数：");
	scanf ("%d", &days);
	while (salary<days)
	{
		salary = salary+1;
		income = income+salary;
	}
	printf ("在%d天里共赚了%d元。\n", days, income);
	return 0;
}

