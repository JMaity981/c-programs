#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
//void dda(int,int,int,int);
void main()
{
int gd=DETECT,gm,x,y,i,j,k,r,n,s,a[10][10],b[10][10],c[10][10],xm,ym;
initgraph(&gd,&gm,"c:\\tc\\bgi");
printf("how many points");
scanf("%d",&n);
xm=getmaxx()/2;
ym=getmaxy()/2;
line(0,239,639,239);
line(319,0,319,479);
printf("enter the points");
for(i=0;i<n;i++)
{
scanf("%d%d",&a[0][i],&a[1][i]);
}
for(i=0;i<n-1;i++)
{
line(xm+a[0][i],ym-a[1][i],xm+a[0][i+1],ym-a[1][i+1]);
}
line(xm+a[0][0],ym-a[1][0],xm+a[0][i],ym-a[1][i]);
printf("enter the scalling factor");
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
{
c[i][j]=c[i][j]+b[i][k]*a[k][j];
}}}
for(i=0;i<n-1;i++)
{
line(xm+c[0][i],ym-c[1][i],xm+c[0][i+1],ym-c[1][i+1]);
}
line(xm+c[0][0],ym-c[1][0],xm+c[0][i],ym-c[1][i]);
getch();
}
