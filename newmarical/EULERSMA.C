#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x,float y)
{
return((y-x)/(y+x));
}
void main()
{
float y1=0.0,y2=0.0,x1=0.0,a=0.0,n=0.0,h=0.0;
int j;
clrscr();
printf("\n enter the valu of range\n");
scanf("%f%f",&a,&n);
printf("enter the valu of y1\n");
scanf("%f",&y1);
printf("\n enter the valuof h:\n");
scanf("%f",&h);
printf("\n\n y1=%3f",y1);
x1=a;
for(j=2;x1+h<n;j++)
{
y2=y1+h*f(x1,y1);
x1=x1+h;
printf("\n x+%2f and y%d=%6f",x1,y2);
}
y1=y2;
getch();
}
