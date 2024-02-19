#include<stdio.h>
#include<conio.h>
#include<math.h>
void QuickSort(int[],int,int);
int partision(int[],int,int);
void main()
{
    int a[10],n,i;
    clrscr();
    printf("\n\n");
    printf("\tHow many element:");
    scanf("%d",&n);
    printf("\tEnter the array eliment:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    QuickSort(a,0,n-1);
    printf("\tAfter Sorting by QUICK Sort:\n");
    for(i=0;i<n;i++)
    printf("\t%d  ",a[i]);
    getch();
}

void QuickSort(int a[],int p,int r)
{
   int q;
   if(p<r)
   {
      q=partision(a,p,r);
      QuickSort(a,p,q);
      QuickSort(a,q+1,r);
   }
}

int partision(int a[],int p,int r)
{
   int x,i,j,temp;
   x=a[p];
   i=p-1;
   j=r+1;
   while(1)
   {
      do
      {
	 j=j-1;
      }
      while(a[j]>x);
      do
      {
	  i=i+1;
      }
      while(a[i]<x);
      if(i<j)
      {
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
      }
      else
      return(j);
   }
}