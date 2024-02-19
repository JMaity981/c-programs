/*.....................Liner search.................*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b=-1,i,j,l,n;
clrscr();
printf("enter how many no. you want?");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("which no. you want to find?");
scanf("%d",&j);
for(i=0;i<n;i++)
{
if(a[i]==j)
{
b=i;
break;
}
}
if(b==-1)
printf("the no. is not found");
else
printf("the no. is found ");
getch();
}