#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float fxy(float,float);
void main()
{
float xin,yin,xend,x,y,h,k1,k2;
printf("Enter the value of x and y and last value of x");
scanf("%f%f%f",&xin,&yin,&xend);
printf("Enter the space value");
scanf("%f",&h);
y=yin;
for(x=xin;x<xend;x=x+h)
{
k1=h*fxy(x,y);
k2=h*fxy(x+h,y+k1);
y=y+(1/2)*(k1+k2);
printf("y(%f)=%f\n",x,y);
}
printf("Required value of y=%f",y);
getch();
}
float fxy(float x,float y)
{
return(-(x*y));
}
