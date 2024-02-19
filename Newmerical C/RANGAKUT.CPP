#include<stdio.h>
#include<conio.h>
float fxy (float,float);
void main()
{
float xin,yin,xend,x,y,h,n,k1,k2,k3,k4;
clrscr();
printf("ENTER THE INITIAL VALUE OF X AND Y AND LAST VALUE OF X");
scanf("%f%f%f",&xin,&yin,&xend);
printf("ENTER THE HOW MANY INTERVAL");
scanf("%f",&n);
h=(xend-xin)/n;
y=yin;
for(x=xin;x<xend;x=x+h)
{
k1=h*fxy(x,y);
k2=h*fxy(x+h/2,y+k1/2);
k3=h*fxy(x+h/2,y+k2/2);
k4=h*fxy(x+h,y+k3);
y=y+(k1+2*k2+2*k3+k4)/6;
}
printf("REQUIRED VALUE OF Y=%f",y);
getch();
}
float fxy (float x,float y)
{
return(x*x+y*y);
}
