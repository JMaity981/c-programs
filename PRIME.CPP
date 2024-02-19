#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
for(i=0;i<=100;i++)
{
for(j=1;j<=100;j++)
{
if(i%j==0)
printf("%d\n",i);
}
}
getch();
}