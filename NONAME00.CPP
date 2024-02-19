#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,s,area;
clrscr();
printf("Enter the sides:");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area is %f",area);
getch();
}