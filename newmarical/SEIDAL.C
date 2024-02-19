#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[10][10],b[10][1],i,j,k;
float e,x1,x2,x3,y1,y2,y3;
clrscr();
printf("\n Enter the error limition :.....");
scanf("%f",&e);
printf("\n\t Enter the input matrix :.....");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n Enter the valu of matrix :.....");
for(i=1;i<=3;i++)
scanf("%d",&b[i][j]);
printf("\n The input matrix is :");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf("%d",&a[i][j]);
}
printf("\n");
}
printf("\n valu of matrix is :");
for(i=1;i<=3;i++)
{
printf("%d",b[i][1]);
printf("\n");
}
x1=y1=1;
x2=y2=0;
x3=y3=1;
do
{
x1=y1;
x2=y2;
x3=y3;
y1=((b[1][1]-(a[1][2]*x2)-(a[1][3]*x3))/a[1][1]);
y2=((b[2][1]-(a[2][1]*y1)-(a[2][3]*x3))/a[2][2]);
y3=((b[3][1]-(a[3][1]*y1)-(a[3][2]*y2))/a[3][3]);
}
while(fabs((x1-y1))>e||fabs((x2-y2))>e||fabs((x3-y3))>e);
printf("%3.2f%3.2f%3.2f",y1,y2,y3);
getch();
}