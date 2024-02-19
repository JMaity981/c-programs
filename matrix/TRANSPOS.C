#include<stdio.h>
#include<conio.h>
  void main()
  {
  int a[50][50],b[50][50],i,j,r1,c1;
  clrscr();
  printf(" Enter the order of matrix:-\n");
  scanf("%d%d",&r1,&c1);
  printf(" Enter the matrix element:-\n");
  for(i=0;i<r1;i++)
  {
  for(j=0;j<c1;j++)
  scanf("%d",&a[i][j]);
  }
  for(i=0;i<r1;i++)
  {
  for(j=0;j<c1;j++)
  {
  b[j][i]=a[i][j];
  }
  }
  printf(" The transporse of matrix\n");
  for(j=0;j<c1;j++)
  {
  for(i=0;i<r1;i++)
  {
  printf("%d\t",a[i][j]);
  }
  printf("\n");
  }
  getch();
  }
