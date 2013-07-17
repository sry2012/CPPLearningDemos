#include <stdio.h>
#define LIMITE 8
#define STOP '#'
int main (void)
{
	int num=0;
	char ch;
	printf ("ÇëÊäÈë×Ö·û£º");
	ch=getchar();
	while (ch!=STOP)
	{
		printf ("%c/%d  ", ch,ch);
		num+=1;
		if ((num%8)==0)
		{
			printf ("\n");
		}
		ch=getchar();
	}
	printf ("\n");
	return 0;
}
