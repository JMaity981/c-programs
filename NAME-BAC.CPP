#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char a[30];
int i,p,n;
clrscr();
printf("Enter the string: ");
gets(a);
n=strlen(a);
for(i=n-1;i>=0;i--)
{
if(isspace(a[i]))
{
p=i;
break;
}
}
for(i=p+1;i<n;i++)
printf("%c",a[i]);
printf(".",a[n]);
printf("%c.",a[0]);
for(i=0;i<p;i++)
if(isspace(a[i]))
printf("%c.",a[i+1]);
getch();
}
