#include <stdio.h>
int main (void)
{
	int a,b,c;
	printf ("请输入三角形的三边（从1~100）：");
	scanf ("%d %d %d", &a, &b, &c);
	if ((a+b)>c&&(a+c)>b&&(b+c)>a)
	{
		if (a==b&&a==c)
			printf("有这三边构成的三角形是等边三角形\n");
		else if (a==b||b==c||a==c)
			printf ("有这三边构成的三角形是等腰三角形\n");
		else printf ("有这三边构成的三角形是普通三角形\n");
	}
	else printf ("这三个数构不成三角形\n");
	
	return 0;
}
