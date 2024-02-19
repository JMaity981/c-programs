/*.............MATRIX MULTIPLICATION..........*/
#include<stdio.h>
#include<conio.h>
void main()
{
      int a[20][20],b[20][20],c[20][20],i,j,k,r1,c1,r2,c2;
      clrscr();
      printf("Enter the order of first matrix : \n");
next: scanf("%d%d",&r1,&c1);
      printf("Enter the order of secend matrix : \n");
      scanf("%d%d",&r2,&c2);
      if(r1!=c2)
      {
      printf(":: YOU ENTER THE RONNG MATRIX ORDER ::\t :: PLEASE TRY AGAIN::");
      goto next;
      }
      printf("Enter the first matrix element :\n");
      for(i=0;i<r1;i++)
      {
      for(j=0;j<c1;j++)
      scanf("%d",&a[i][j]);
      printf("\n");
      }
      printf("Enter the secend matrix element :\n");
      for(i=0;i<r2;i++)
      {
      for(j=0;j<c2;j++)
      scanf("%d",&b[i][j]);
      printf("\n");
      }
      printf(".....After multiplication of an matrix :......\n");
      for(i=0;i<r1;i++)
      {
      for(j=0;j<c2;j++)
      {
      c[i][j]=0;
      for(k=0;k<c1;k++)
      c[i][j]=c[i][j]+a[i][k]*b[k][j];
      }
      }
      for(i=0;i<r1;i++)
      {
      for(j=0;j<c2;j++)
      printf("%5d",c[i][j]);
      printf("\n");
      getch();
      }
      }
/*............END THE PORGRAM.............*/
