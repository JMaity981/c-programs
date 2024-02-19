#include<stdio.h>
#include<conio.h>
#include<math.h>
float fx (float);
void main()
{
float h=0.2,s=0,v,i,a,b,n;
clrscr();
printf("ENTER THE LOWER LIMIT AND UPPER LIMIT");
scanf("%f%f",&a,&b);
printf("ENTER THE INTERVAL");
scanf("%f",&n);
h=(b-a)/n;
for(i=a;i<b;i=i+2*h)
{
s=s+(fx(i)+4*fx(i+h)+fx(i+2*h));
}
v=(h/3)*s;
printf("RECUIRED VALUE=%f",v);
getch();
}
float fx (float x)
{
float y;
y=exp(-x*x);
return(y);
}
