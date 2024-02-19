#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
int k=0,l,i;
char a[30];
clrscr();
printf("\n.......enter the string............\n");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
switch(a[i])
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
k++;
}
}
printf("\n.......the no of vowel is=%d",k);
getch();
}




