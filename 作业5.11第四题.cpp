#include <stdio.h>
#define feet 30.48
#define inch 2.54
int main ()
{
	float height;
	printf ("������һ���߶�ֵ����cmΪ��λ����");
	scanf ("%f", &height);
	while (height>0)
	{
		printf ("Enter a height in centimeters: %f\n", height);
		printf ("%.1f cm = %d feet,  %.1f inches\n", height, (int)(height/feet) , height/inch);
	    printf ("������һ���߶�ֵ����cmΪ��λ����");
	    scanf ("%f", &height);
	}
	printf ("bye\n");
	return 0;
}
