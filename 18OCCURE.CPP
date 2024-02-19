#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[30],b[1];
    int i,k=0;
    clrscr();
    printf("\n\n");
    printf("\tEnter a string: ");
    gets(a);
    printf("\tFind the letter: ");
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
       if(a[i]==b[0])
       k++;
    }
    printf("\tNo. of occurence of '%s'=%d",b,k);
    getch();
}

