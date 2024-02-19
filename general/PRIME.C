#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,i,j,m,f=0;
clrscr();
printf("Enter the no:-\n");
scanf("%d",&a);
if(a>1)
{
m=sqrt(a);
for(i=2;i<=m;i++)
{
j=a%i;
if(j==0)
{
f=1;
break;
}
}
if(f==1)
printf("the nomber not is prime:-\n");
else
printf("the no is  prime:-\n");
}
else
printf("::you enetr the invalied input::");
getch();
}
