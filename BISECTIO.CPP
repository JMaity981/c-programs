#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
float fx(float);
void main()
{
clrscr();
float fa,fb,fm,e=0.0001,a,b,m;
printf("Enter the interval: ");
scanf("%f%f",&a,&b);
pp:
fa=fx(a);
fb=fx(b);
if(fa*fb>0)
{
printf("Root does not exit");
exit(0);
}
m=(a+b)/2;
fm=fx(m);
if(fa*fm<0)
b=m;
else
a=m;
if(fabs(fm)>e)
goto pp;
printf("Root=%f",m);
getch();
}
float fx(float x)
{
float y;
y=(x*x*x-4.0*x-9.0);
return(y);
}