#include<stdio.h>
#include<math.h>

int main()
{
	
float x;
printf("enter the value of x\n");
scanf("%f",&x);
float y=x*10000;
printf("the truncated value is %0.4f\n", trunc(y)/10000);
printf("the Round off value is %0.4f\n", x);

return 0;
}
