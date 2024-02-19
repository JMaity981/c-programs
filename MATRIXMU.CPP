#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,arow,acol,brow,bcol;
clrscr();
printf("\n\n");
printf("\tEnter the order of first matrix:");
scanf("%d%d",&arow,&acol);
printf("\tEnter the order of second matrix:");
scanf("%d%d",&brow,&bcol);
if(acol==brow)
{
printf("\tEnter the elements of first matrix:");
for(i=0;i<arow;i++)
{
for(j=0;j<acol;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\tEnter the elemnets of second matrix:");
for(i=0;i<brow;i++)
{
for(j=0;j<bcol;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<arow;i++)
{
for(j=0;j<bcol;j++)
{
c[i][j]=0;
for(k=0;k<acol;k++)
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
printf("\tThe result matrix is: \n");
for(i=0;i<arow;i++)
{
for(j=0;j<bcol;j++)
{
printf("\t%d\t",c[i][j]);
}
printf("\n");
}
}
else
printf("\tMatrix multiplication is not possible");
getch();
}
