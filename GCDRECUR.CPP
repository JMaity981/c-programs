#include<stdio.h>
#include<conio.h>
int gcd(int,int);
void main()
{
   int x,y,a,lcm;
   clrscr();
   printf("Enter two number:");
   scanf("%d%d",&x,&y);
   a=gcd(x,y);
   printf("GCD of two number=%d\n",a);
   lcm=(x*y)/a;
   printf("LCM of two number=%d",lcm);
   getch();
}
int gcd (int x,int y)
{
   if(y==0)
     return(x);
   else
    return(gcd(y,x%y));
}