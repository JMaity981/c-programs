#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
	   {
	   int i,n;
	   clrscr();
	   printf(" Enter the no:- ");
	   sacnf("%d",&n);
	   for(i=1;i<=n;i++)
	   printf(" Result=%d",fact(i));
	   getch();
	   }
	   int fact (int n)
	   {
	   if(n==0)
	   return 0;
	   else
	   if(n==1)
	   return 1;
	   else
	   fact=fact*i;
	   }
