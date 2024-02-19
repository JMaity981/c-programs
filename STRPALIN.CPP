# include<stdio.h>
# include<conio.h>
# include<string.h>
void main()
{
   char str1[10],str2[10];
   int n;
   printf("\n\n");
   printf("\tEnter a string:");
   gets(str1);
   strcpy(str2,str1);
   strrev(str1);
   n=strcmp(str1,str2);
   if(n==0)
     printf("\tPalindrom");
   else
     printf("\tNot palindrom");
   getch();
}