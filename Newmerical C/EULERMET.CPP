#include<stdio.h>
#include<conio.h>
float fxy (float,float);
void main()
{
float xin,yin,xend,h,n,x,y;
clrscr();
printf("Enter the initial value of x and y and last value of x");
scanf("%f%f%f",&xin,&yin,&xend);
printf("Enter the interval");
scanf("%f",&n);
h=(xend-xin)/n;
y=yin;
for(x=xin;x<xend;x=x+h)
{
y=y+h*fxy(x,y);
}
printf("RECUIRED VALUE OF y=%f",y);
getch();
}
float fxy (float x,float y)
{
return(x+y);
}