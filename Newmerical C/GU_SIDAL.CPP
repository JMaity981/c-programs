#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a[20][20],b[20][20],c[20][20],s,e=0.000001;
int i,j,n,k,l;
printf("Enter how many number u like to use");
scanf("%d",&n);
printf("Enter the matrix");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%f",&a[i][j]);
}
printf("Enter the value of matrix");
for(j=0;j<n;j++)
scanf("%f",&b[j]);
printf("Enter the initial result");
for(j=0;j<n;j++)
scanf("%f",&c[j]);
printf("The result is:");
as:for(l=0;l<n;l++)
cl[l]=c[l];
for(i=0;i<n;i++)
{
s=b[i];
for(j=0;j<n;j++)
{
if(i==j)
goto er;
s=s-(a[i][j]*c[j]);
er:
}
c[i]=s/a[i][i];
}
printf("\n");
for(l=0;l<n;l++)
printf("\t%f",c[l]);
for(l=0;l<n;l++)
{
if(fabs(c[l]-a[l]>e)
goto as;
}
getch();
}