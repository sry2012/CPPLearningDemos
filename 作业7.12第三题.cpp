#include <stdio.h>
int main (void)
{
	 int input, count, count2;
	 float sum,sum2;
	 sum=sum2=0;
	 count=count2=0;
     printf ("������һ��������");
	 scanf ("%d", &input);
	 while (input!=0)
	 {
		 if ((input%2)==0)
		 {
			 count+=1;
			 sum+=input;
		 }
		 else 
		 {
			 count2+=1;
			 sum2+=input;
		 }
         printf ("������һ��������");
		 scanf ("%d", &input);
	 }
	 printf ("���������ż����%d����ż����ƽ����δ%f��������%d����������ƽ����δ%f��\n", count, float(sum/count),count2,float(sum2/count2));
	 return 0;
}


