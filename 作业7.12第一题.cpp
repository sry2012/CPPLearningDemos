#include <stdio.h>
#include <ctype.h>
#define STOP '#'
int main (void)
{
	int count,count2;
	count=count2=0;
	char ch;
	printf ("请输入字符：");
	ch=getchar();
	while (ch!=STOP)
	{
		if (isspace(ch))
			count+=1;
		if (isgraph(ch))
			count2+=1;
		ch=getchar();
	}
	printf ("输入的字符里有空格%d个，其他字符%d。\n", count,count2);
	return 0;
}