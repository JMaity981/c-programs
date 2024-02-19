#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,count;
clrscr();
for(i=3;i<=100;i++)
{
count=0;
for(j=2;j<i;j++)
{
if(i%j==0)
count++;
}

if(count==0)
printf("%  d",i);
}
getch();
}

