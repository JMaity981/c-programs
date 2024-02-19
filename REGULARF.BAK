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
PP:
fa=fx(a);
fb=fx(b);
if(fa*fb>0)
{
printf("Root does not exit");
exit(0);
}
m=a-((a-b)/(fa-fb))*fa;
fm=fx(m);
if(fa*fm<0)
b=m;
else
a=m;
if(fabs(fm)>e)
goto PP;
printf("Root=%f",m);
getch();
}
float fx(float x)
{
float y;
y=(x*x*x-x-1.0);
return(y);
}

