#include <stdio.h>
int main (void)
{
	float input,input2,output;
	int status, status2;
	printf ("������������������");
    status=scanf("%f", &input);
    status2=scanf("%f", &input2); 
	while (status==1&&status2==1)
	{
		output=(input-input2)/(input*input2);
		printf ("%f\n", output);
		printf ("��������һ�鸡������");
		status=scanf("%f", &input);
        status2=scanf("%f", &input2); 
	}
	return 0;
}
