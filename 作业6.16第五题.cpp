#include <stdio.h>
int main (void)
{
	int max,  min, num;
	printf (" �����������޺����ޣ�");
	scanf ("%d  %d", &max, &min);
	printf ("  num  num square  num cube  \n");
	for (num=min; num>=min&&num<=max;num++)
		printf ("%4d   %4d     %4d\n", num,num*num,num*num*num);
	return 0;
}