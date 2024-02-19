#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
float x[20],y[20],f,s,h,d,p;
int i,j,n,k;
clrscr();
printf("How many number u like to use: ");
scanf("%d",&n);
printf("Enter the elements of x: ");
for(i=1;i<=n;i++)
scanf("%f",&x[i]);
printf("Enter the elements of y: ");
for(i=1;i<=n;i++)
scanf("%f",&y[i]);
h=x[2]-x[1];
printf("Enter the value of f: ");
scanf("%f",&f);
s=(f-x[n])/h;
p=1;
d=y[n];
for(i=n,k=1;k<n;i--,k++)
{
for(j=n;j>1;j--)
y[j]=y[j]-y[j-1];
p=p*(s+k-1)/k;
d=d+p*y[n];
}
printf("For the value %f the result is %f",f,d);
getch();
}
