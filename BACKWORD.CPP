#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
float x[20],y[20],f,s,d,p,h;
int i,j,n,k;
clrscr();
printf("Enter the value of n");
scanf("%d",&n);
printf("Enter the value of x");
for(i=0;i<n;i++)
{
scanf("%f",&x[i]);
}
printf("Enter the value of y");
for(i=0;i<n;i++)
{
scanf("%f",&y[i]);
}
h=x[2]-x[1];
printf("Enter the searching point");
scanf("%f",&f);
s=(f-x[n])/h;
d=y[n];
p=1;
for(i=n,k=1;i>1;i--,k++)
{
for(j=n;j>1;j++)
{
y[j]=y[j]-y[j+1];
}
p=p*(s+k-1)/k;
d=d+p*y[n];
}
printf("For f=%f,ans=%f",f,d);
getch();
}