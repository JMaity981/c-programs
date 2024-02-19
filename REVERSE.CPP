#include<stdio.h>
#include<conio.h>
void main()
{
char a[9],b[9];
int i,l=0,j;
clrscr();
printf("enter a string");
gets(a);
while(a(l)!='\0')
{
l++;
}
for(i=0,j=l-1; a[i]!='\0'; i++,j--)
{
b[i]=a[j];
}
b[i]='\0';
puts(b);
getch();
}