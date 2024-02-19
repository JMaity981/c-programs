#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
float t,s=1.0,x;
clrscr();
printf("\n....................... Enter the value of n ..................\n");
scanf("%d",&n);
printf("\n........................ Enter the value of  x ................\n");
scanf("%f",&x);
t=x;
i=1;
do
{
s=s+t;
t=t*(x/(i+1));
i++;
}
while(i<=n);
printf("\n ....................Result:= %f..................",s);
getch();
}
