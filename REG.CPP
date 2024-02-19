#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
float fx (float);
void main()
{
float fa,fb,fm,a,b,m,e=0.0001;
printf("Enter the interval");
scanf("%f%f",&a,&b);
pp:
fa=fx(a);
fb=fx(b);
if(fa*fb>0)
{
printf("Root does not exit");
exit(0);
}
m=a-(a-b)/(fa-fb)*f(a);
f(m)=fx(m);
if(fa*fb<0)
b=m;
else
a=m;
if(fabs(fm)>e)
goto pp;
printf("Root=%f",m);
getch();
float fx(float x)
{
float y:
y=(x*x*x-x-1.0);
return(y);
}