
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
void main()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\tc\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
printf("%d\n",x);
printf("%d",y);
getch();
}