/*.................. C CODING FOR BABUL SHORT ...........*/
#include<stdio.h>
#include<conio.h>
void main(){
int a[10],i,j,n,t;
clrscr();
printf("\n Enter the elements:");
scanf("%d",&n);
printf("\n Enter rthe elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n ****************After the sorting*****************:=");
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("\n The elements are:.................\n");
for(i=0;i<n;i++)
printf("  %d",a[i]);
getch();
}
/*............................. END THE PORGRAM .................*/