#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str[10];
int i,j,l;
printf("Enter the string");
gets(str);
l=strlen(str);
for(i=0;i<=l;i++)
{
for(j=0;j<i;j++)
{
putchar(str[j]);
}
printf("\n");
}
getch();
return 0;
}