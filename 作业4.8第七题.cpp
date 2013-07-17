#include <stdio.h>
#define Gallon 3.785
#define Mile 1.609
int main ()
{
	float oil, distance, consume, consume2;
	printf ("请输入消耗的汽油数（以加仑为单位）：");
	scanf ("%f", &oil);
	printf ("请输入路程（以英里为单位）：");
	scanf ("%f", &distance);
    consume = distance / oil;
	printf ("每英里消耗汽油%f加仑。\n", consume);
	consume2 = 100 * ((distance*Mile)/(Gallon*oil));
	printf ("每100公里消耗汽油%.1f升。\n", consume2);
    return 0;
}

