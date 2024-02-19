#include<stdio.h>
#include<conio.h>
void main()
{
float r,t,y,a[12],b[12],s=0,p;
int i,j,n;
printf("\n\n\tHow many number:");
scanf("%d",&n);
printf("\tEnter the values of x:");
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
}
printf("\tEnter the values of y:");
for(i=0;i<n;i++)
{
scanf("%f",&b[i]);
}
printf("\tEnter the point:");
scanf("%f",&t);
for(i=0;i<n;i++)
{
r=a[i];
p=1;
for(j=0;j<n;j++)
{
if(i!=j)
{
p=p*(t-a[j])/(r-a[j]);
}
}
p=p*b[i];
s=s+p;
}
printf("\tFor the point %f,the value=%f",t,s);
getch();
}