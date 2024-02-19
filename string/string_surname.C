#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char a[30];
int k=0,l,i;
clrscr();
printf("\n........enter the string......\n");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]==' ')
k=i;
}
for(i=k+1;i<l;i++)
printf("%c",a[i]);
printf(" ");
for(i=0;i<k;i++)
printf("%c",a[i]);
getch();
}



