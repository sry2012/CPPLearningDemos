#include <stdio.h>
float main ()
{
	float a, b, h, s, x, z;
	printf ("���������ε��ϵ�a =");
	scanf ("%f", &a);
	printf ("���������ε��µ�b =");
	scanf ("%f", &b);
	printf ("���������εĸ�h =");
	scanf ("%f",&h);
	x = a + b;
	z = h * 0.5;
	s = x * z;
	printf ("���ϵ���%f,�µ���%f����Ϊ%f�����ε������%f\n", a, b, h, s);
	return 0;
}
