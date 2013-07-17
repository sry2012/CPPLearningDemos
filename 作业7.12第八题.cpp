#include <stdio.h>
#define RATE 0.15
#define RATE2 0.20
#define RATE3 0.25
#define PAY 8.75
#define PAY2 9.33
#define PAY3 10.00
#define PAY4 11.20
int main (void)
{
	int sort;
	double time,time2,all_salary,salary,income,tax;
	printf ("****************************************************************************\n");
	printf ("Enter the number corresponding to the desired pay rate or action:\n");
	printf ("1\)$8.75/hr           2\)$9.33/hr\n"); 
	printf ("3\)$10.00/hr          4\)$11.20/hr\n");
	printf ("5\)quit\n");
	printf ("*****************************************************************************\n");
	scanf ("%d", &sort);
	
	switch (sort)
	{
	case 1:
		salary=PAY;break;
	case 2:
        salary=PAY2;break;
    case 3:
        salary=PAY3;break;
    case 4:
        salary=PAY4;break;
	case 5:
		salary=0;break;
	}
	if (salary!=0)
	{
		printf ("How long are you work a week?");
		scanf ("%lf", &time);
		if (time<40.)
			time2=time;
		else time2=40.+(time-40.)*1.5;
		all_salary=time2*salary;
		if ("all_salary<300")
			tax=all_salary*RATE;
		else if(all_salary<450)
			tax=300*RATE+(all_salary-300)*RATE2;
		else tax=300*RATE+150*RATE+(all_salary-450)*RATE3;
		income=all_salary-tax;
		printf ("all_salary is $%.2lf, tax is $%.2lf, income is $%.2lf.\n", all_salary, tax, income);
	}
	else printf ("It is over.\n");
	return 0;
}
