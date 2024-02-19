#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char a[30],t;
int i,j,l;
clrscr();
printf("......enter the string.......\n");
gets(a);
l=strlen(a);
for(i=0;i<l-1;i++)
{
for(j=0;j<l-1-i;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
//printf("the alphabatic order is");
//for(i=0;i<l;i++)
puts(a);
getch();
}
