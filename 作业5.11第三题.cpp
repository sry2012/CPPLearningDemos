#include <stdio.h>
#define Week 7
int main ()
{
	int time, days, weeks;
	printf ("������һ��ʱ�䣨����Ϊ��λ����");
	scanf ("%d", &time);
	while (time>0)
	{
	    weeks = (int)(time/Week);
	    days = time%Week;
	    printf ("%d days is %d weeks, %days\n", time, weeks, days);
        printf ("������һ��ʱ�䣨����Ϊ��λ����");
        scanf ("%d", &time);
	}
	return 0;
}

