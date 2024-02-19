#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],arow,acol,brow,bcol,i,j;
clrscr();
printf("Enter the order of first matrix: ");
scanf("%d%d",&arow,&acol);
printf("Enter the order of second matrix: ");
scanf("%d%d",&brow,&bcol);
if(arow==brow&&acol==bcol)
{
printf("Enter the elements of first matrix:\n");
for(i=0;i<arow;i++)
{
for(j=0;j<acol;j++)
scanf("%d",&a[i][j]);
}
printf("Enter the elements of second matrix:\n");
for(i=0;i<brow;i++)
{
for(j=0;j<bcol;j++)
scanf("%d",&b[i][j]);
}
for(i=0;i<arow;i++)
{
for(j=0;j<acol;j++)
c[i][j]=a[i][j]+b[i][j];
}
printf("After addition the resulten matix is:\n");
for(i=0;i<arow;i++)
{
for(j=0;j<acol;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
}
else
printf("Matrix addition is not possible");
getch();
}
