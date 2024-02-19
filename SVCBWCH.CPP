#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
   int v=0,c=0,b=0,w=0,ch=0,i,n;
   char s[50],p;
   clrscr();
   printf("\n\n");
   printf("\tEnter a string: ");
   gets(s);
   n=strlen(s);
   for(i=0;i<n;i++)
   {
     if(isalpha(s[i]))
     {
       p=toupper(s[i]);
       if(p=='A'||p=='E'||p=='I'||p=='O'||p=='U')
	 v++;
       else
	 c++;
     }
     else if(isspace(s[i]))
       b++;
   }
   printf("\n \tThe number of voule=%d" ,v);
   printf("\n \tThe number of conconent=%d" ,c);
   printf("\n \tThe number of blank space=%d" ,b);
   printf("\n \tThe number of word=%d" ,b+1);
   printf("\n \tThe number of charecter=%d",n-b);
   getch();
}
