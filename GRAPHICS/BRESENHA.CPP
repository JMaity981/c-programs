# include<stdio.h>
# include<conio.h>
# include<graphics.h>
# include<math.h>
void bresenham(int,int,int,int);
void main()
{
   int gd=DETECT,gm,x1,x2,y1,y2;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("Enter the First Point");
   scanf("%d%d",&x1,&y1);
   printf("Enter the Second Point");
   scanf("%d%d",&x2,&y2);
   bresenham(x1,y1,x2,y2);
   getch();
}
void bresenham(int x1,int y1,int x2,int y2)
{
   int dx,dy,dt,ds,x,y,d;
   dx=x2-x1;
   dy=y2-y1;
   dt=2*(dy-dx);
   ds=2*dy;
   d=2*dy-dx;
   x=x1;
   y=y1;
   putpixel(x,y,RED);
   while(x<x2)
   {
      x++;
      if(d<0)
	d=d+ds;
      else
      {
	y++;
	d=d+dt;
      }
      putpixel(x,y,GREEN);
   }
}