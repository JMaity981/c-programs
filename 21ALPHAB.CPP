#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   int i,j,n;
   char a[20],temp;
   clrscr();
   printf("\n\n");
   printf("\tEnter a string: ");
   gets(a);
   n=strlen(a);
   for(i=0;i<n-1;i++)
   for(j=0;j<n-i-1;j++)
   if(a[j]>a[j+1])
   {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
   }
   printf("\tAlphabetically order wise the string is: ");
   for(i=0;i<n;i++)
   printf("%c",a[i]);
   getch();
}
