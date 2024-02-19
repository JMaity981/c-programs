#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x,float y)
{
return(x+y);
}
void main()
{
float x,x1,y1,x0,y0,h,k1,k2,k3,k4,k;
clrscr();
printf("\n enter the valu for x:");
scanf("%f",&x);
x0=0;
y0=1;
h=0.1;
do
{
k1=h*f(x0,y0);
k2=h*f(x0+h/2,y0+k1/2);
k3=h*f(x0+h/2,y0+k2/2);
k4=h*f(x0+h,y0+k3);
k=(k1+2*k2+2*k3+k4)/6;
y1=y0+k;
x1=x0+h;
y0+y1;
x0=x1;
printf("\n\n result=%f",y1);
}
while(x0!=x);
getch();
}
