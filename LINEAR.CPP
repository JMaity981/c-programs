#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int n,i,key,a[10],flag=0;
   clrscr();
   printf("\n\n");
   printf("\tHow many number you like to use:");
   scanf ("%d",&n);
   printf("\tEnter the numbers:");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   printf("\tEnter the number that you want to find:");
   scanf("%d",&key);
   for(i=0;i<=n;i++)
   {
     if(a[i]==key)
     {
       flag=1;
       break;
     }
   }
   if(flag==1)
     printf("\tFound at the possition %d",i+1);
   else
     printf("\tNot found");
   getch();
}
