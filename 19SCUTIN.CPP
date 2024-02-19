#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[25];
    int n,i,p=0;
    printf("\n\n");
    clrscr();
    printf("\n\n");
    printf("Enter the string: ");
    gets(s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
	if(isspace(s[i]))
	{
	      printf("%c.",s[p]);
	      p=i+1;
	}
    }
    for(i=p;i<n;i++)
    printf("%c",s[i]);
    getch();
}
