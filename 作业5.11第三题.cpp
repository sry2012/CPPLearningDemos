#include <stdio.h>
#define Week 7
int main ()
{
	int time, days, weeks;
	printf ("请输入一段时间（以天为单位）：");
	scanf ("%d", &time);
	while (time>0)
	{
	    weeks = (int)(time/Week);
	    days = time%Week;
	    printf ("%d days is %d weeks, %days\n", time, weeks, days);
        printf ("请输入一段时间（以天为单位）：");
        scanf ("%d", &time);
	}
	return 0;
}

