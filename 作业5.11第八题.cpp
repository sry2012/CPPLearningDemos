#include <stdio.h>
void Temperature (double n);
int main ()
{
	double input;
	int num;
	printf ("������һ���¶ȣ�");
	num = scanf ("%lf", &input);
	while ( num == 1 );
	{
		Temperature (input);
		printf ("��������һ���¶Ȼ�q�˳���\n");
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
	printf ("������¶�ֵ�������¶�Ϊ%lf�������¶�Ϊ%lf��\n", celsius, kelvin);
}