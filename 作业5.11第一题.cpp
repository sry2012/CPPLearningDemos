#include <stdio.h>
#define Hour 60
int main ()
{
	float time; 
	printf ("������һ��ʱ�䣨�Է���Ϊ��λ����");
	scanf ("%f", &time);
	while ((time/Hour)>1)
	{
		printf ("��������һ��ʱ�䣨�Է���Ϊ��λ����");
		scanf ("%f", &time);
	}
	return 0;
}