#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
fltoat r,a,b,c,s;
clrscr();
printf("Enter the three side of a tringle");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
r=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area=%f",r);
getch();
}