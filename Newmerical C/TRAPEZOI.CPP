#include<stdio.h>
#include<conio.h>
float fx (float);
void main()
{
float a,b,n,h,s,v;
int i;
clrscr();
printf("ENTER THE LOWER LIMIT AND UPPER LIMIT");
scanf("%f%f",&a,&b);
printf("ENTER THE INTERVAL");
scanf("%f",&n);
h=(b-a)/n;
for(i=a;i<b;i=i+h)
{
s=s+(fx(i)+fx(i+h));
}
v=(h/2)*s;
printf("REQUARD VALUE=%f",v);
getch();
}
float fx (float x)
{
float y;
y=1/(1+x);
return(y);
}