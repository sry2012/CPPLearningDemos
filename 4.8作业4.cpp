#include <stdio.h>
#define feet 2.34
int main ()
{
	float a, hight;
	
	char name[40];
	printf ("What's your name?\n");
	scanf ("%s", name);
	printf ("%s,How tall are you? please input in __CM.\n", name);
	scanf ("%f", &a);
	hight = a/feet;
	printf ("%s, you are %f tall.\n", name, hight);
	return 0;
}

