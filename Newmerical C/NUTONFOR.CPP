#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
float x[20],y[20],h,f,s,p,d;
int i,j,n;
clrscr();
printf("ENTER HOW MANY ELEMENTS");
scanf("%d",&n);
printf("ENTER THE ELEMENT OF X");
for(i=0;i<n;i++)
{
scanf("%f",&x[i]);
}
printf("ENTER THE ELEMENT OFY");
for(i=0;i<n;i++)
{
scanf("%f",&y[i]);
}
h=x[1]-x[0];
printf("ENTER SEARCHING POINT");
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
printf("FOR THE VALUE OF X=%f THE VALUE IS %f",f,d);
getch();
}