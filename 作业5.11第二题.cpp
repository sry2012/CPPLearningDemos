#include <stdio.h>
int main ()
{
	int input, condition;
	printf ("������һ��������");
	scanf ("%d", &input);
	condition = input +10;
	while (input <= condition)
	{
		printf ("%d\n", input);
		input = input + 1;
	}
	return 0;
}