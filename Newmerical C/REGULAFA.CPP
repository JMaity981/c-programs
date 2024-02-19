#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
float fx (float);
void main()
{
float a,b,xn,fa,fb,fxn,e=0.0001;
clrscr();
printf("ENTER THE INTERVAL");
scanf("%f%f",&a,&b);
pp:
fa=fx(a);
fb=fx(b);
if(fa*fb>0)
{
printf("ROOT DOES NOT EXIT");
exit(0);
}
xn=a-((a-b)/(fa-fb))*fa;
fxn=fx(xn);
if(fa*fxn<0)
b=xn;
else
a=xn;
if(fabs(fxn)>e)
goto pp;
printf("root=%f",xn);
getch();
}
float fx (float x)
{
float y;
y=(x*x*x-x-1);
return(y);
}
