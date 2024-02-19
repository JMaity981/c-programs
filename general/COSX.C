#include<stdio.h>
#include<stdio.h>
#include<math.h>
void main()
{
int n,i;
float x,s,t;
clrscr();
printf(" Enter the valu of n & x:-\n");
scanf("%d%f",&n,&x);
s=x;
t=x;
for(i=0;i<n;i+=2)
{
t=-(float)(pow(x,2)*t)/((i+1)*(i+2));
s=s+t;
}
printf("\n..Result sin(x):=%f",s);
getch();
}