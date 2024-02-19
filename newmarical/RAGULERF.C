#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
float a;
a=(pow(x,3)-2*x-5.0);
return(a);
}
int main()
{
float x1,x2,x0,e;
int k;
clrscr();
printf("\n\t enter the accuracy......:\n");
scanf("%f",&e);
//fflush(stdin);
do
{
printf("\n\t enter the two interval......:\n",x0,x1);
scanf("%f%f",&x0,&x1);
}
while(f(x0)*f(x1)>0.0);
k=0;
do
{
x2=x0-((f(x0)*(x1-x0))/(f(x1)-f(x0)));
if(f(x0)*f(x2)<=0.0)
x1=x2;
else
x0=x2;
k=k+1;
}
while(fabs(f(x2))>e);
printf("\n\t Root of the equn is:= %f",x2);
printf("\n\t The number of iteration is=%d",k);
getch();
return(0);
}