#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
     {
     int i,j,f=0,n;
     char a[50];
     clrscr();
     printf(" Enter the string:-\n");
     gets(a);
     n=strlen(a);
     for(i=0,j=n-1;i<n/2;i++,j--)
     {
     if(a[i]!=a[j])
     {
     f=1;
     break;
     }
     }
     if(f==1)
     printf(" The string is not palidram\n");
     else
     printf(" The string is  palidrom\n");
     getch();
     }