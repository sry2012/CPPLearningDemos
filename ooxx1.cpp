#include <stdio.h>
int main (void)
{
	int a;
	printf ("请输入您的姓名：");
    scanf ("%", &a);
	printf ("\n");
	printf ("显示您的名字：", a);
	return 0;
}