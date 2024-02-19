#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char a[30];
int n,i,p;
clrscr();
printf("Enter the name: ");
gets(a);
n=strlen(a);
for(i=n;i>=0;i--)
{
if(isspace(a[i]))
{
p=i;
break;
}
}
for(i=p+1;i<n;i++)
printf("%c",a[i]);
printf(" %c.",a[0]);
for(i=1;i<p;i++)
{
if(isspace(a[i]))
printf(" %c.",a[i+1]);
}
getch();
}