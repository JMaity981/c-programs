#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,n;
printf("Enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=(n-i);j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("*");
}
printf("\n");
}
getch();
return 0;
}