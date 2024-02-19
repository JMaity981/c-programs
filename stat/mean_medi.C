#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[20]={0},sum=0,n,t,b[20]={0};
float x=0.0,y=0.0;
clrscr();
printf("\nEnter the limit\n");
scanf("%d",&n);
printf("Enter the set of numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
x=(float)sum/(float)n;
printf("Mean\t= %f",x);

/*for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}*/
if(n%2==0)
y=(float)(a[n/2]+a[(n-1)/2])/2;
else
y=a[(n-1)/2];
printf("\nMedian\t= %f",y);
getch();
}
