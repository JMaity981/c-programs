#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void dda(int,int,int,int);
void main()
{
  int gd=DETECT,gm,x,y,i,j,k,n,r,s,a[10][10],b[10][10],c[10][10];
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  printf("how many points");
  scanf("%d",&n);
  printf("enter the points");
  for(i=0;i<n;i++)
  scanf("%d%d",&a[0][i],&a[1][i]);
  for(i=0;i<n;i++)
  dda(a[0][i],a[1][i],a[0][i+1],a[1][i+1]);
  dda(a[0][0],a[1][0],a[0][i],a[1][i]);
  printf("enter the scaling factor");
  scanf("%d%d",&x,&y);
  b[0][0]=x;
  b[0][1]=0;
  b[1][0]=0;
  b[1][1]=y;
  for(i=0;i<2;i++)
  {
    for(j=0;j<n;j++)
    {
      c[i][j]=0;
      for(k=0;k<2;k++)
       c[i][j]=c[i][j]+(b[i][k]*a[k][i]);
     }
   }
   for(i=0;i<n-1;i++)
   dda(c[0][0],c[1][0],c[0][i],c[1][i]);
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
   for(i=0;i<=step;i++)
   {
     x=x+xinc;
     y=y+yinc;
     putpixel(floor(x),floor(y),RED);
   }
}