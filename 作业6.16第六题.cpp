#include <stdio.h>
#include <string.h>
int main (void)
{
	int num;
	char word[15];
	printf ("请输入一个单词：");
	scanf ("%s",word);
    num=strlen(word);
	printf ("%d\n", num);
	return 0;
}