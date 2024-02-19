#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i;
float a,b,h,x,val;
float y[100],sum1=0,sum2=0,sum3=0,sum4=0;
clrscr();
printf("\n\n\t  enter the lowerlimit and upperlimit::\n");
scanf("%f%f",&a,&b);
printf("\n\t enter the number of subintervale::\n");
scanf("%d",&n);
if(n%6==0)
{
h=(b-a)/n;
for(i=0;i<=n;i++)
{
x=a+i*h;
y[i]=1+pow(x,3);
}
for(i=1;i<=(n-1);i+6)
sum1=(sum1+y[i]+y[i+4]);
for(i=2;i<=(n-2);i+6)
sum2=(sum2+y[i]+y[i+2]);
for(i=6;i<=(n-3);i+6)
sum3=(sum3+y[i]);
for(i=6;i<(n-6);i+6)
sum4=(sum4+y[i]);
val=(((3*h)/10)*(y[0]+y[n]+5*sum1+sum2+6*sum3+2*sum4));
printf("\n\n\t the value of intregration weddes rule:=%f",val);
}
else
{
printf("\n\n\t sorry! you are not put subinterval multiplier of 6\n");
exit(0);
}
getch();
}
