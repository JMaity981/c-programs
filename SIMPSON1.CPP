#include<stdio.h>
#include<conio.h>
#include<math.h>
float fx(float);
void main()
{
clrscr();
float a,b,h,n,s=0,v,i;
printf("Enter the limits:");
scanf("%f%f",&a,&b);
printf("How many interval:");
scanf("%f",&n);
h=(b-a)/n;
for(i=a;i<b;i=i+2*h)
{
s=s+(fx(i)+4*fx(i+h)+fx(i+2*h));
}
v=(h/3)*s;
printf("Required value=%.3f",v);
getch();
}
float fx(float x)
{
return(4*x-3*x*x);
}