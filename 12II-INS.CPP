#include<stdio.h>
#include<conio.h>
void main()
{
   int a[20],i,j,n,key;
   clrscr();
   printf("\n\n");
   printf("\tHow many eliments:");
   scanf("%d",&n);
   printf("\tEnter array eliments:");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(j=1;j<n;j++)
   {
      key=a[j];
      i=j-1;
      while((i>-1)&&(a[i]>key))
      {
	  a[i+1]=a[i];
	  i=i-1;
      }
      a[i+1]=key;
   }
   printf("\tAfter sorting by Insertion Sort:\n");
   for(i=0;i<n;i++)
   printf("\t%d  ",a[i]);
   getch();
}
