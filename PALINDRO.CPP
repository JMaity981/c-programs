#include<stdio.h>
#include<conio.h>
void main()
{
   int n,r,m,s=0;
   clrscr();
   printf("\n\n");
   printf("\tEntr a number:");
   scanf("%d",&n);
   m=n;
   while(n!=0)
   {
     r=n%10;
     s=s*10+r;
     n=n/10;
   }
   if(m==s)
     printf("\tThis number is palindrom");
   else
     printf("\tThis number is not palindrom");
   getch();
}
