#include <stdio.h>
#include <ctype.h>
int main (void)
{
	char ch;
	int count,count2;
	count=count2=0;
	printf ("�������ַ���");
	ch=getchar();
	while (ch!=EOF)
	{
		if (islower(ch))
			count+=1;
		else if (isupper(ch))
			count2+=1;
		ch=getchar();
	}
	printf ("������ַ���Сд��ĸ��%d������д��%d����\n", count,count2);
	return 0;
}
