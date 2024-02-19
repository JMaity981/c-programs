#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int n,i,s=0,r,m;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
m=n;
while(n!=0)
{
r=n%10;
s=s+fact(r);
n=n/10;
}
if(m==s)
printf("Strong number");
else
printf("Not a strong number");
getch();
}
int fact(int x)
{
   if(x==0||x==1)
     return(1);
   else
     return(x*fact(x-1));
}