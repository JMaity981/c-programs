#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,s=0;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
m=n;
for(i=1;i<n;i++)
{
if(n%i==0)
s=s+i;
}
if(n==s)
printf("Perfact number");
else
printf("Not a perfact number");
getch();
}
