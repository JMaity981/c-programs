#include<stdio.h>
#include<conio.h>
int main(){
int n,i,j;
printf("Enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
if(i==2&&j==2)
printf("0");
else
printf("*");
}
printf("\n");
}
getch();
return 0;
}