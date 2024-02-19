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
for(i=a;i<b;i=i+3*h)
{
s=s+(fx(i)+3*fx(i+h)+3*fx(i+2*h)+fx(i+3*h));
}
v=(3*h/8)*s;
printf("Required value=%f",v);
getch();
}
float fx(float x)
{
return(x/(1+x));
}