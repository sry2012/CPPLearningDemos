#include <stdio.h>
#define feet 2.54
int main (void)
{
	float height;
	printf ("������������ߣ���cmΪ��λ����");
	scanf ("%f", &height);
	printf ("������ߺ���Ϊ%.3fӢ�硣\n", height/feet);
	return 0;
}
