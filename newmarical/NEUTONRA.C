#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
float a;
a=(pow(x,3)-8*x-4);
return(a);
}
float df(float x)
{
float b;
b=3*x*x-8;
return(b);
}
int main()
{
float q,x0,x1,e;
int k=0;
clrscr();
printf("\n\t ..........enetr the qceuracy:........\n");
scanf("%f",&e);
printf("\n\t enter the initial gass valu\n");
scanf("%f",&x0);
do
{
q=x0;
x1=x0-(f(x0)/df(x0));
x0=x1;
k=k+1;
}
while(fabs(x1-q)>e);
printf("\n root of the equn is=%f",x1);
printf("\n\t actual number of intagion=%d",k);
getch();
return 0;
}
