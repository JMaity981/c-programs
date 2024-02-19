#include<stdio.h>
#include<conio.h>
#include<math.h>
float fx(float);
void main()
{
float a,b,e=0.00001;
printf("Enter the first approximate root");
scanf("%f",&a);
pp:
b=fx(a);
if(fabs(a-b)>e)
{
a=b;
goto pp;
}
printf("Root=%f",b);
getch();
}
float fx(float x)
{
float y;
y=sqrt((x+1)/x);
return(y);
}