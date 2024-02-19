#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
float fx(float);
float dfx(float);
void main()
{
float a,b,e=0.00001;
printf("Enter the first approximation root: ");
scanf("%f",&a);
pp:
b=a-fx(a)/dfx(a);
if(fabs(b-a)>e)
{
a=b;
goto pp;;
}
printf("Root=%f",b);
getch();
}
float fx(float x)
{
float y;
y=3*x*x*x+5.0*x-4.0;
return(y);
}
float dfx(float x)
{
float y;
y=9.0*x*x+5.0;
return(y);
}