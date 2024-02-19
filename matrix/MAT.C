#include<stdio.h>
#include<conio.h>
      void main()
      {
      int a[20][20],b[20][20],c[20][20],i,j,r1,c1,r2,c2;
      clrscr();
next: printf("Enter ordrer of 1st:-\n");
      scanf("%d%d",&r1,&c1);
      printf(" Enter order of 2nd:-\n");
      scanf("%d%d",&r2,&c2);
      if(r1!=r2||c1!=c2)
      {
      printf(" you enter the wrong order matrix ,try again");
      goto next;
      }
      printf(" Enter the first matrix:-\n");
      for(i=0;i<r1;i++)
      {
      for(j=0;j<c1;j++)
      scanf("%d",&a[i][j]);
      }
      printf(" Enter the second matrix:-\n");
      for(i=0;i<r2;i++)
      {
      for(j=0;j<c2;j++)
      scanf("%d",&b[i][j]);
      }
      for(i=0;i<r1;i++)
      {
      for(j=0;j<c1;j++)
      c[i][j]=a[i][j]+b[i][j];
	    }
      printf(" The result of matrix addition\n");
      for(i=0;i<r1;i++)
      {
      for(j=0;j<c2;j++)
      printf("%d\n",c[i][j]);
      }
  getch();
  }
