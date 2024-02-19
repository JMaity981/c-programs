/*........................Selection sort............................*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,t;
clrscr();
printf(" Enter the value of n :\n");
scanf("%d",&n);
printf(" Enter the array elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("*************Before sorted the array is:= **************\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("************After sorted the array is:= *********\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
getch();
}