#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
float a;
a=(2*x-3*sin(x)-5);
return(a);
}
void main()
{
float x1,x2,xmid,eps;
clrscr();
printf("\n\t ..........enter the valu of x1 x2 & eps.........\n");
scanf("%f%f%f",&x1,&x2,&eps);
xmid=(x1+x2)/2;
while(fabs(xmid-x2)>eps)
{
if((f(x1)*f(xmid))>0)
x1=xmid;
else
x2=xmid;
printf("\n\t middle point is =%f\n",xmid);
xmid=(x1+x2)/2;
}
printf("\n\t the approximate root is =%.2f\n",xmid);
getch();
}