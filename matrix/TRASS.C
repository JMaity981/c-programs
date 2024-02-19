#include<stdio.h>
#include<conio.h>
    void main()
    {
    int a[50][50],i,j,s=0,r1,c1;
    clrscr();
    printf(" Enter the ordre of matrix:-\n");
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
    if(i==j)
    {
    s=s+a[i][j];
    }
    }
    printf(" After trass of matrix=%d",s);
    getch();
    }
