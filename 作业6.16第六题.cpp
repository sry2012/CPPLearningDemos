#include <stdio.h>
#include <string.h>
int main (void)
{
	int num;
	char word[15];
	printf ("������һ�����ʣ�");
	scanf ("%s",word);
    num=strlen(word);
	printf ("%d\n", num);
	return 0;
}