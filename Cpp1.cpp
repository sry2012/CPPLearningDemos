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
		printf ("请输入一个字符：");
		ch=getchar();
		if (isblank(ch))
			count+=1;
		else if (isprint(ch))
			count2+=1;
	}while (ch!=STOP);
	printf ("输入的字符里有空格%d个，其他字符%d个。\n", count,count2);
	return 0;
}
