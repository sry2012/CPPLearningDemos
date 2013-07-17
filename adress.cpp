#include <stdio.h>
int main (void)
{
	char adress[40];
	printf ("请输入您的地址：");
	scanf ("%s", adress);
	printf ("您的地址为：%s\n", adress);
	return 0;
}