#include <stdio.h>
int main (void)
{
	char name[10];
	printf ("ÇëÊäÈëÄúµÄĞÕÃû£º");
	scanf ("%s", name);
	printf ("\"%s\"\n", name);
	printf ("\"*%20s*\"\n", name);
	printf ("\"*%-20s*\"\n", name);
	printf ("\"*%9s*\" \n", name);
	return 0;
}
