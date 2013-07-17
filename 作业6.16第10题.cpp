#include <stdio.h>
#define SIZE 26
int main (void)
{
	char letter[27];
	char ch="a";
	int num;
	for (num=0;num<SIZE;num++)
	{
		letter[num]=ch;
		ch+=1;
	}
	printf ("%s\n", letter);
	return 0;
}
