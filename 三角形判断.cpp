#include <stdio.h>
int main (void)
{
	int a,b,c;
	printf ("�����������ε����ߣ���1~100����");
	scanf ("%d %d %d", &a, &b, &c);
	if ((a+b)>c&&(a+c)>b&&(b+c)>a)
	{
		if (a==b&&a==c)
			printf("�������߹��ɵ��������ǵȱ�������\n");
		else if (a==b||b==c||a==c)
			printf ("�������߹��ɵ��������ǵ���������\n");
		else printf ("�������߹��ɵ�����������ͨ������\n");
	}
	else printf ("��������������������\n");
	
	return 0;
}
