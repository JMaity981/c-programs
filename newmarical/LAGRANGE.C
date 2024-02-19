#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x[10],y[10],xg,p[10],sum=0;
int i,j,n;
clrscr();
printf("\n enter the valu of n-----\n");
scanf("%d",&n);
printf("\n\t enetr the valu of x and y-----\n");
for(i=0;i<n;i++)
scanf("%f%f",&x[i],&y[i]);
printf("enter the valu of x and y is determined\n");
scanf("%f",&xg);
for(j=0;j<n;j++)
{
p[j]=1;
for(j=0;j<n;j++)
{
if(i!=j)
p[j]=p[j]*(xg-x[i])/(x[j]-x[i]);
}
}
for(i=0;i<n;i++)
sum=sum+(p[i]*y[1]);
printf("\n\t x=%f,the valu of functin=%ff",xg,sum);
getch();
}