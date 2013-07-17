#include <stdio.h>
int main (void)
{
	char family_name[40];
	char name[40];
	printf ("请输入您的姓和名：");
    scanf ("%s", family_name);
	scanf ("%s", name);
	printf ("%s ,%s\n", name, family_name);
	return 0;
}
