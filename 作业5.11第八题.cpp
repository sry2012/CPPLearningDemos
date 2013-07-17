#include <stdio.h>
void Temperature (double n);
int main ()
{
	double input;
	int num;
	printf ("请输入一个温度：");
	num = scanf ("%lf", &input);
	while ( num == 1 );
	{
		Temperature (input);
		printf ("请输入下一个温度或q退出：\n");
        num =scanf ("%lf",&input);
	}
	return 0;
}
void Temperature (double n)
{
	const double change=1.8;
	const double change2=273.16;
	double celsius, kelvin;
	celsius =n*change+32.0;
	kelvin =celsius+change2;
	printf ("输入的温度值的摄氏温度为%lf，绝对温度为%lf。\n", celsius, kelvin);
}