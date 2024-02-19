#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (pow(x,3)+(x*x)-1.0)
#define g(x) (1/sqrt(1+x))
void main()
{
float x0,x1;
clrscr();
do
{
printf("\n\t enter the guess interval......\n");
scanf("%f%f",&x0,&x1);
if(f(x0)*f(x1)<0)
break;
printf("\n\t gauss interval is urong:input again......");
}
while(1);
do
{
x1=g(x0);
if(fabs(x1-x0)<0.0001)
break;
x0=x1;
}
while(1);
printf("\n\t approximate root is: %.3f",x1);
getch();
}