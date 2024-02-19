#include<stdio.h>
#include<conio.h>
void main()
{
   int a[20],i,j,n,temp;
   clrscr();
   printf("\n\n");
   printf("\tHow many eliments:");
   scanf("%d",&n);
   printf("\tEnter array eliments:");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n-1;i++)
   for(j=0;j<n-i-1;j++)
   if(a[j]>a[j+1])
   {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
   }
   printf("\tAfter sorting by BUBBLE sort: \n");
   for(i=0;i<n;i++)
   printf("\t%d  ",a[i]);
   getch();
}
