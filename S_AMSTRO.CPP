#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,a=0,r,i=0,digit,s;
clrscr();
printf("Enter a number");
scanf("%d",&n);
digit=n;
s=n;
while(n!=0)
{
r=n%10;
i=i++;
n=n/10;
}
while(digit!=0)
{
r=digit%10;
a=a+pow(r,i);
digit=digit/10;
}
if(s==a)
printf("This  number is amstrong");
else
printf("not ams");
getch();
}