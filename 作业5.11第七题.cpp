#include <stdio.h>
float square (float input);
int main (void)
{
	float input, output;
	printf ("请输入一个浮点数：");
	scanf ("%f", &input);
	output=square (input);
	printf ("%f\n", output);
	return 0;
}
float square (float input)
{
	float square;
	square = input*input;
	return square;
}
