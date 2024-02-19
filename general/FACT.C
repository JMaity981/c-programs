#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,f=1;
clrscr();
printf("Enter the how many no:-\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("RESULT=%d",f);
getch();
}

