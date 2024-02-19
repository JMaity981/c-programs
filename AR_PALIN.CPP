#include<stdio.h>
#include<conio.h>
void main()
{
int r,m,s=0,i,n;
clrscr();
for(i=0;i<=100;i++)
{
m=i;
s=0;
n=i;
while(n!=0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(m==s)
printf("  %d",s);
}
getch();
}