#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50];
int i,n,t,j;
clrscr();
printf("Enter the how many string:-\n");
scanf("%d",&n);
printf("Enter the string:-\n");
for(i=0;i<n;i++)
scanf("%s",a[i]);
for(i=0;i<n-1;i++)
{
for(j=1;j<n-i;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j]=t;
}
}
}
printf("The string of shorting:-\n");
for(i=0;i<n;i++)
printf("%s ",a[i]);
getch();
}
