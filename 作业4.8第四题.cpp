#include <stdio.h>
#define feet 2.54
int main (void)
{
	float height;
	char name[10];
	printf ("����������������");
	scanf ("%s", name);
	printf ("������������ߣ���cmΪ��λ����");
	scanf ("%f", &height);
	printf ("%s, ������ߺ���Ϊ%fӢ�硣\n" , name,height /feet);
	return 0;
}

