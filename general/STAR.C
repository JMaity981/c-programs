#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter the number of line\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=i;j++)
printf(" ");
printf("* ");
}
getch();
}
