#include <stdio.h>
#include <ctype.h>
int location (char ch);
int main ()
{
	char ch;
	int num,count;
	count=1;
	printf ("��������Ϣ��\n");
	ch =getchar ();
	while (ch!=EOF)
	{
		num=location (ch);
		if (num!=-1)
			printf ("��%d���ַ�����ĸ������ĸ����λ��Ϊ%d��\n", count, num);
		else if (num==-1)
			printf ("��%d�ַ�������ĸ��\n",count);
		count++;
		ch=getchar ();
	}
	return 0;
}
int location (char ch)
{
	int num;
	if (isupper(ch)!=0)
		num=ch-'A'+1;
	else if (islower(ch)!=0)
		num=ch-'a'+1;
	else num=-1;
	return num;
}

