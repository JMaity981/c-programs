#include<stdio.h>
#include<conio.h>
float fx(float,float);
void main()
{
float xi,yi,h,xl,u;
clrscr();
printf("
Enter the initial value of x and y:");
scanf("%f%f",&xi,&yi);
printf("Enter the value of h:");
scanf("%f",&h);
printf("Enter the resulting point:");
scanf("%f",&xl);
while(xi<=xl)
{
printf("\n%.2f\t%.4f",xi,yi);
u=yi;
yi=yi+(h*fx(xi,yi));
xi=xi+h;
}
printf("\nHence y(%.2f)=%.4f",xl,u);
getch();
}

float fx(float a,float b)
{
return((b-a)/(b+a));
}