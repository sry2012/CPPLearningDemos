#include <stdio.h>
#include <ctype.h>
#define STOP '#'
int main (void)
{
	int count,count2;
	count=count2=0;
	char ch;
	printf ("�������ַ���");
	ch=getchar();
	while (ch!=STOP)
	{
		if (isspace(ch))
			count+=1;
		if (isgraph(ch))
			count2+=1;
		ch=getchar();
	}
	printf ("������ַ����пո�%d���������ַ�%d��\n", count,count2);
	return 0;
}