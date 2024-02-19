# include<stdio.h>
# include<conio.h>
# include<graphics.h>
# include<math.h>
void bres(int,int,int);
void main()
{
   int gd=DETECT,gm,r,xc,yc;
   clrscr();
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("Enter the Redious");
   scanf("%d",&r);
   printf("Enter the center of the circle");
   scanf("%d%d",&xc,&yc);
   bres(r,xc,yc);
   getch();
   closegraph();
}
void bres(int r,int xc,int yc)
{
   int p,x,y;
   p=3-2*r;
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
      p=p+4*(x-y)+10;
      y=y-1;
    }
    else
      p=p+4*x+6;
    x=x+1;
   }while(x<=y);
}