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
	printf ("��������Ϣ��\n");
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
	printf ("������ַ�һ��%d�У���%d���ַ���\n", count2, count);
}

