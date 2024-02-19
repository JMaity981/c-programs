#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
float x[20],y[20],f,s,h,d,p;
int i,j,n;
clrscr();
printf("Enter the value of n");
scanf("%d",&n);
printf("Enter the value of x");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
printf("Enter the value of y");
for(i=0;i<n;i++)
{
scanf("%d",&y[i]);
}
h=x[1]-x[0];
printf("Enter the value of f");
scanf("%f",&f);
s=(f-x[0])/h;
p=1;
d=y[0];
for(i=0;i<(n-1);i++)
{
for(j=0;j<(n-i);j++)
{
y[j]=y[j+1]-y[j];
}
p=p*(s-i)/(i+1);
d=d+p*y[0];
}
printf(" The value is %f",d);
getch();
}