//apply bisection method upto n decimal point
// f(x)=x^3 - 4x -9
#include<stdio.h>
#include<math.h>

float fun( float x)
{
      return pow(x,3)-4*x-9;
}
int main()
{

  float a,b, y;
  float x;
  printf("Enter the value of a and b :");
  scanf("%f%f",&a,&b);
  
  do
  {
      x=(a+b)/2;
      printf("x:%f\n",x);
     if(fun(a)*fun(x)<0)
      {
          printf("%f %f\n",fun(a), fun(x));
        b=x;
      }
   else
   {
       printf("%f %f\n",fun(x),fun(b));
         a=x;
   } 
   y= fabs(a-b);

  }while(y>=0.0001);
 
 printf("The first interval: %f the second interval: %f",a,b);
 return 0;
}
