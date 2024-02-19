#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,k;
printf("Enter the value of n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
printf(" ");
}
for(k=1;k<=(n-i);k++)
{
printf("*");
}
printf("\n");
}
getch();
return 0;
}