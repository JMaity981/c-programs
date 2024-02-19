#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
float x[20],y[20],f,u,h,d,p;
int j,i,n;
printf("Enter the value of n");
scanf("%d",&n);
printf("Enter the elements of x");
for(i=0;i<n;i++)
{
scanf("%f",&x[i]);
}
printf("Enter the elements of y");
for(i=0;i<n;i++)
{
scanf("%f",&y[i]);
}
h=x[1]-x[0];
printf("Enter the value of f");
scanf("%f",&f);
u=(f-x[0])/h;
p=1;
d=y[0];
for(i=0;i<(n-1);i++)
{
for(j=0;j<(n-i);j++)
{
y[j]=y[j+1]-y[j];
}
p=p*(u-i)/(i+1);
d=d+p*y[0];
}
printf("For the value of x=%f the value is %f",f,d);
getch();
}
