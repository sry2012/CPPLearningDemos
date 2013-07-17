#include <stdio.h>
int main (void)
{
	char family_name[20];
	char name[20];
	printf ("请输入您的姓和名：");
	scanf ("%s  %s", family_name, name);
	printf ("%s , %s\n", name, family_name);
	return 0;
}