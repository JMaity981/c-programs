#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
clrscr();
printf("\n Enter the number of line: \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=n-1;k>=i;k--)
printf(" ");
for(j=1;j>=i;j++)
printf("%c",*);
}
printf("\n");
getch();
}