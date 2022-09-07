#include<math.h>
int main()
{
	float x,y;
	printf("enter the value of x");
	scanf("%f",&x);
	printf("enter the value of y");
	scanf("%f",&y);
	
	float Ea=fabs(x-y);
	float Er=fabs(Ea/x);
	float Ep=Er*100;
	
	printf("the absolute error is %f\n",Ea);
	printf("the relative error is %f\n",Er);
	printf("the percentage error is %f\n ",Ep);
	return 0;
}
