#include <stdio.h>
int main (void)
{
	 int input, count, count2;
	 float sum,sum2;
	 sum=sum2=0;
	 count=count2=0;
     printf ("请输入一个整数：");
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
         printf ("请输入一个整数：");
		 scanf ("%d", &input);
	 }
	 printf ("输入的数中偶数有%d个，偶数的平均数未%f，奇数有%d个，奇数的平均数未%f。\n", count, float(sum/count),count2,float(sum2/count2));
	 return 0;
}


