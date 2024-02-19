# include<stdio.h>
# include<conio.h>
# include<graphics.h>
# include<math.h>
void mid(int,int,int);
void main()
{
   int gd=DETECT,gm,r,xc,yc;
   clrscr();

   printf("Enter the Redious");
   scanf("%d",&r);
   printf("Enter the center of the circle");
   scanf("%d%d",&xc,&yc);
   //clrscr();
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   mid(r,xc,yc);
   getch();
   closegraph();
}
void mid(int r,int xc,int yc)
{
   int p,x,y;
   p=1-r;
   x=0;
   y=r;
   do{
    putpixel(xc+x,yc+y,RED);
    putpixel(xc+x,yc-y,YELLOW);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc-x,yc-y,BLUE);
    putpixel(xc+y,yc+x,MAGENTA);
    putpixel(xc+y,yc-x,CYAN);
    putpixel(xc-y,yc+x,BROWN);
    putpixel(xc-y,yc-x,GREEN);
    if(p>0)
    {
      p=p+2*(x-y)+5;
      y=y-1;
    }
    else
      p=p+2*x+3;
    x=x+1;
   }while(x<=y);
}