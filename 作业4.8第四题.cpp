#include <stdio.h>
#define feet 2.54
int main (void)
{
	float height;
	char name[10];
	printf ("请输入您的姓名：");
	scanf ("%s", name);
	printf ("请输入您的身高（以cm为单位）：");
	scanf ("%f", &height);
	printf ("%s, 您的身高合算为%f英寸。\n" , name,height /feet);
	return 0;
}

