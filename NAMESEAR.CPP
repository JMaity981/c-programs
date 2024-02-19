#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20][20],b[20];
int i,n,flag=0;
clrscr();
printf("How many names");
scanf("%d",&n);
printf("Enter the names:");
for(i=0;i<n;i++)
scanf("%s",a[i]);
printf("enter the name to be searched");
fflush(stdin);
gets(b);
for(i=0;i<n;i++)
{
if(strcmp(a[i],b)==0)
{
flag=1;
break;
}
}
if(flag==1)
printf("Name is found at the possition %d",i+1);
getch();
}