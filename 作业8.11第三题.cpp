#include <stdio.h>
#include <ctype.h>
int main (void)
{
	char ch;
	int count,count2;
	count=count2=0;
	printf ("请输入字符：");
	ch=getchar();
	while (ch!=EOF)
	{
		if (islower(ch))
			count+=1;
		else if (isupper(ch))
			count2+=1;
		ch=getchar();
	}
	printf ("输入的字符里小写字母有%d个，大写有%d个。\n", count,count2);
	return 0;
}
