#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
   int x,y;
   clrscr();
   printf("Enter two number:");
   scanf("%d%d",&x,&y);
   printf("Before swaping:x=%d,y=%d",x,y);
   swap(&x,&y);
   printf("\n");
   printf("After swaping:x=%d,y=%d",x,y);
   getch();
}
void swap(int*a,int*b)
{
   *a=*a+*b;
   *b=*a-*b;
   *a=*a-*b;
}