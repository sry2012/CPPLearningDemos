#include <stdio.h>
int main (void)
{
	double income,tax;
	int num,status;
	do
	{
		printf ("�������������룺");
		scanf ("%lf", &income);
		printf ("1����    2����\n3�ѻ飬����  4�ѻ飬����\n");
		printf ("��ѡ������˰�����ࣺ");
		status=scanf ("%d", &num);
		switch (num)
		{
		case 1:
			if (income<17850)
				tax=income*0.15;
			else tax=17850*0.15+(income-17850)*0.28;break;
		case 2:
			if (income<23900)
				tax=income*0.15;
			else tax=23900*0.15+(income-23900)*0.28;break;
		case 3:
			if (income<29750)
				tax=income*0.15;
			else tax=29750*0.15+(income-29750)*0.28;break;
		case 4:
			if (income<14875)
				tax=income*0.15;
			else tax=14875*0.15+(income-14875)*0.28;break;
		default :break;
		}
    printf ("��Ӧ����˰��Ϊ%lf\n", tax);
	}while (status==1);
	
	return 0;
}