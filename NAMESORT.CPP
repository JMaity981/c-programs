#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20][20],b[20];
int i,j,n;
clrscr();
printf("How many number");
scanf("%d",&n);
printf("Enter the names:");
for(i=0;i<n;i++)
scanf("%s",a[i]);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(strcmp(a[j],a[j+1])>0)
{
strcpy(b,a[j]);
strcpy(a[j],a[j+1]);
strcpy(a[j+1],b);
}
}
}
printf("Sorted name are\n");
for(i=0;i<n;i++)
printf("%s\n",a[i]);
getch();
}