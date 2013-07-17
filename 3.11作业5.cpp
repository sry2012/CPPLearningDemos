#include <stdio.h>
#define N 3.156e7
int main ()
{
	int age;
	double s;
	printf ("请输入您的年龄：");
    scanf ("%d", &age);
    s = age * N;
	printf ("您的年龄大约%lf秒.\n", s);
	return 0;
}
