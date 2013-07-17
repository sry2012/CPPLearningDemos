#include <stdio.h>
#include <ctype.h>
#define stop '#'
void function ();
int main ()
{
	function ();
	return 0;
}
void function ()
{
	char ch;
	printf ("请输入信息：\n");
    ch=getchar ();
	int count,count2;
	count=count2=0;
	while (ch!=EOF)
	{
		if (isupper(ch)!=0)
			count++;
		else if (islower(ch)!=0)
			count++;
		else if (ch=='\n')
			count2++;
		ch=getchar ();
		
	}
	printf ("输出的字符一共%d行，共%d个字符。\n", count2, count);
}

