#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
float y[100],a,b,x,val,h,sum=0;
clrscr();
printf("\n\n\t enter the lower limit\n");
scanf("%f",&a);
printf("\n\t enter the upper limit\n");
scanf("%f",&b);
printf("\n\t enter the no of subinterval\n");
scanf("%d",&n);
h=(b-a)/n;
for(i=0;i<=n;i++)
{
x=a+i*h;
y[i]=((1/(1+(x*x))));
}
for(i=1;i<=n-1;i++)
{
sum=sum+y[i];
}
val=h/2*(y[0]+2*sum+y[n]);
printf("\n\n\t the valu of intregration is:-%f",val);
getch();
}