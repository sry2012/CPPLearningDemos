#include <stdio.h>
#include <ctype.h>
#define STOP '#'
int main (void)
{
	int count,count2;
	count=0;
	count2=0;
	char ch;
	do
	{
		printf ("������һ���ַ���");
		ch=getchar();
		if (isblank(ch))
			count+=1;
		else if (isprint(ch))
			count2+=1;
	}while (ch!=STOP);
	printf ("������ַ����пո�%d���������ַ�%d����\n", count,count2);
	return 0;
}
