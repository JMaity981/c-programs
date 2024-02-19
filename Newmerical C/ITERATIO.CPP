#include<stdio.h>
#include<conio.h>
#include<math.h>
float fx (float);
void main()
{
float a,b,e=0.0001;
clrscr();
printf("ENTER THE FIRST APPROXIMATION VALUE");
scanf("%f",&a);
pp:
b=fx(a);
if(fabs(b-a)>e)
{
a=b;
goto pp;
}
printf("ROOT=%f",b);
getch();
}
float fx (float x)
{
float y;
y=pow((x+1),(0.333));
return (y);
}