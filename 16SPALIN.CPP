#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[20],s2[20];
    int n;
    clrscr();
    printf("Enter string:");
    gets(s1);
    strcpy(s2,s1);
    strrev(s1);
    n=strcmp(s1,s2);
    if(n==0)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    getch();
}