#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
clrscr();
float x[20],y[40],f,s,h,d,p;
int i,j,n;
printf("\n\n\tEnter the value of n:");
scanf("%d",&n);
printf("\tEnter the elements of x: ");
for(i=0;i<n;i++)
scanf("%f",&x[i]);
printf("\tEnter the elements of y: ");
for(i=0;i<n;i++)
scanf("%f",&y[i]);
h=x[1]-x[0];
printf("\tEnter the value of f:");
scanf("%f",&f);
s=(f-x[0])/h;
p=1;
d=y[0];
for(i=0;i<(n-1);i++)
{
for(j=0;j<(n-i);j++)
y[j]=y[j+1]-y[j];
p=p*(s-i)/(i+1);
d=d+p*y[0];
}
printf("\tFor the point x=%6.4f the value is %6.4f",f,d);
getch();
}