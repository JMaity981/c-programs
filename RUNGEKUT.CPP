#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
float fxy(float,float);
void main()
{  clrscr();
   float xin,yin,x,y,h,k1,k2,k3,k4,xend;
   printf("Enter the initial value of x & y and last value of x:");
   scanf("%f%f%f",&xin,&yin,&xend);
   printf("Enter the space value:");
   scanf("%f",&h);
   y=yin;
   for(x=xin;x<xend;x=x+h)
   {
     k1=h* fxy(x,y);
     k2=h* fxy(x+h/2,y+k1/2);
     k3=h* fxy(x+h/2,y+k2/2);
     k4=h* fxy(x+h,y+k3);
     y=y+(k1+2*k2+2*k3+k4)/6;
     printf("y(%f)=%f\n",x,y);
   }
   printf("Required value of y=%f",y);
   getch();
}
float fxy(float x, float y)
{
  return(x*x+y*y);
}