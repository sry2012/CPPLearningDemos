#include <stdio.h>
void sry ();//题目要求构建的函数
void fenhang ();//用于将两个函数分成两行

int main (void)
{
	sry ();
	sry ();
	sry ();
    fenhang ();
	sry ();
	sry ();
	fenhang ();
	sry ();
	fenhang ();
	return 0;
}
void sry ()
{
	printf ("Sminle!");
}
void fenhang ()
{
	printf ("\n");
}