#include <stdio.h>
#define Gallon 3.785
#define Mile 1.609
int main ()
{
	float oil, distance, consume, consume2;
	printf ("���������ĵ����������Լ���Ϊ��λ����");
	scanf ("%f", &oil);
	printf ("������·�̣���Ӣ��Ϊ��λ����");
	scanf ("%f", &distance);
    consume = distance / oil;
	printf ("ÿӢ����������%f���ء�\n", consume);
	consume2 = 100 * ((distance*Mile)/(Gallon*oil));
	printf ("ÿ100������������%.1f����\n", consume2);
    return 0;
}

