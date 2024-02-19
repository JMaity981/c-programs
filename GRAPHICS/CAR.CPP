# include<stdio.h>
# include<conio.h>
# include<graphics.h>
# include<dos.h>
void main()
{
   int gd=DETECT,gm,i;
   initgraph(&gd,&gm,"C:\\TC\\bgi");
   for(i=0;i<450;i++)
   {
   clrscr();
   line(50+i,50,150+i,50);
   line(50+i,50,30+i,100);
   line(150+i,50,170+i,100);
   line(30+i,100,170+i,100);
   circle(60+i,100,20);
   circle(140+i,100,20);
   delay(100);
   }
   getch();
}