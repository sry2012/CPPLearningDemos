#include <stdio.h>
int main ()
{
	int salary, income, days, time;
	salary = 0;
	time = 0;
	income = 0;
	printf ("请输工作的天数：");
	scanf ("%d", &days);
	while (time<days)
	{
		time = time +1 ;
		salary = time*time;
		income = income+salary;
	}
	printf ("在%d天里共赚了%d元。\n", days, income);
	return 0;
}

