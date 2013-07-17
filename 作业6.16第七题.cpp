#include <stdio.h>
int main (void)
{
	float input,input2,output;
	int status, status2;
	printf ("请输入两个浮点数：");
    status=scanf("%f", &input);
    status2=scanf("%f", &input2); 
	while (status==1&&status2==1)
	{
		output=(input-input2)/(input*input2);
		printf ("%f\n", output);
		printf ("请输入下一组浮点数：");
		status=scanf("%f", &input);
        status2=scanf("%f", &input2); 
	}
	return 0;
}
