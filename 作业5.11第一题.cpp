#include <stdio.h>
#define Hour 60
int main ()
{
	float time; 
	printf ("请输入一段时间（以分钟为单位）：");
	scanf ("%f", &time);
	while ((time/Hour)>1)
	{
		printf ("请再输入一段时间（以分钟为单位）：");
		scanf ("%f", &time);
	}
	return 0;
}