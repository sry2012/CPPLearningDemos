#include <stdio.h>
#define A 2.54
int main ()
{
	float a;
	printf ("请输入您的身高：");
	scanf ("%f", &a);
	printf ("您的身高合算为%f英寸。\n", a/A);
	return 0;
}
