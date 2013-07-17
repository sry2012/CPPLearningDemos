#include <stdio.h>
#define STOP '#'
#define CHANGE '.'
#define CHANGE2 '!'
int main (void)
{
	char ch;
	int count;
	printf ("«Î ‰»Îæ‰◊”£∫\n");
	ch=getchar();
	while (ch!=STOP)
	{
		if (ch==CHANGE)
		{
			ch='!';
			printf ("%c", ch);
		}
		else if (ch==CHANGE2)
			printf ("!!");
		else printf ("%c", ch);
		ch=getchar();
	}
	return 0;
}


