#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n;
printf("Enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
if(i==0||i==n||j==0||j==n)
{
printf("s");
}
else
printf(" ");
}
printf("\n");
}
getch();
return 0;
}