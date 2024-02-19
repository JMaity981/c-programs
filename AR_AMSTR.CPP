#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long int a=0,r,i=0,digit,s,j,n;
clrscr();
for(j=0;j<=1000;j++)
{
digit=j;
s=j;
n=j;
i=0;
while(n!=0)
{
r=n%10;
i++;
n=n/10;
}
a=0;
while(digit!=0)
{
r=digit%10;
a=a+pow(r,i);
digit=digit/10;
}
if(s==a)
printf("  %ld",j);
}
getch();
}