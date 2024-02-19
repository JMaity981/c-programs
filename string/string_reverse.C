#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,n;
char a[50];
clrscr();
printf("Enter the the string:-\n");
gets(a);
n=strlen(a);
printf("After the revers of a string:-\n");
for(i=n-1;i>=0;i--)
{
putch(a[i]);
}
getch();
}