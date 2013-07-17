#include <stdio.h>
#define feet 2.54
int main (void)
{
	float height;
	printf ("请输入您的身高（以cm为单位）：");
	scanf ("%f", &height);
	printf ("您的身高合算为%.3f英寸。\n", height/feet);
	return 0;
}
