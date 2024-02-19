#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char a[30];
int k,i,l,c;
clrscr();
printf("\n............enter the string.............\n");
gets(a);
l=strlen(a);
printf("%c",a[0]);
for(i=1;i<=l;i++)
{
if(a[i]==' ')
{
k=i;
break;
}
}
printf(".%c",a[k+1]);
for(i=k+1;i<=l;i++)
{
if(a[i]==' ')
{
printf("%c",'.');
c=i;
break;
}
}
for(i=c+1;i<=l;i++)
printf("%c",a[i]);
getch();
}