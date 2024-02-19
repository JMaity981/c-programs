# include<stdio.h>
# include<conio.h>
# include<graphics.h>
# include<math.h>
void dda(int,int,int,int);
void main()
{
   int gd=DETECT,gm,x1,x2,y1,y2;
   initgraph(&gd,&gm,"C:\\TC\\bgi");
   printf("Enter the First Point");
   scanf("%d%d",&x1,&y1);
   printf("Enter the Second Point");
   scanf("%d%d",&x2,&y2);
   dda(x1,y1,x2,y2);
   getch();
}
void dda(int x1,int y1,int x2,int y2)
{
   int dx,dy,step,i;
   float x,y,xinc,yinc;
   dx=x2-x1;
   dy=y2-y1;
   if(abs(dx)>abs(dy))
     step=dx;
   else
     step=dy;
   xinc=(float)dx/step;
   yinc=(float)dy/step;
   x=x1;
   y=y1;
   putpixel(x,y,RED);
   for(i=1;i<=step;i++)
   {
      x=x+xinc;
      y=y+yinc;
      putpixel(floor(x),floor(y),GREEN);
   }
}