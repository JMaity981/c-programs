/*Runga kutta Method*/
/********************/
#include<stdio.h>
float f(float x,float y)
{
return x*x+y*y;
}
void main()
{
float x0,y0,h,xn,x,y,k1,k2,k3,k4,k;
printf("enter the value of x0,y0,h,xn\n");
scanf("%f %f %f %f",&x0,&y0,&h,&xn);
x=x0;y=y0;
while(1)
{
if(x==xn) break;
k1=h*f(x,y);
k2=h*f(x+h/2,y+k1/2);
k3=h*f(x+h/2,y+k2/2);
k4=h*f(x+h,y+k3);
k=(k1+(k2+k3)*2+k4)/6;
x+=h;y+=k;
printf("when x=%8.4f y=%8.4f\n",x,y);
}
}


// Output
// enter the value of x0,y0,h,xn
// 1 0 0.1 1.2
// when x = 1.1000  y = 0.1107
// when x = 1.2000  y = 0.2463
