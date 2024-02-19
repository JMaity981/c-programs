#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[20];
int x[20],i,j,n,temp;
clrscr();
printf("Enter the string ");
scanf("%c",a);
n=strlen(a);
for(i=0;i<n;i++)
x[i]=a[i];
for(i=0;i<n-1;i++)
{
for(j=0;j<(n-i-1);j++)
{
 if(x[j]>x[j+1])
 {
  temp=x[j];
  x[j]=x[j+1];
  x[j+1]=temp;
 }
 }
 }
for(i=0;i<n;i++)
 printf("%c",x[i]);
getch();
return 0;
}