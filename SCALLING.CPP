#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,x,y,i,j,k,r,n,s,a[10][10],b[10][10],c[10][10],m,f;
initgraph(&gd,&gm,"c:\\tc\\bgi");
line(0,239,639,239);
line(319,0,319,479);
m=getmaxx()/2;
f=getmaxy()/2;
printf("How many number");
scanf("%d",&n);
printf("Enter the point");
for(i=0;i<n;i++)
scanf("%d%d",&a[0][i],&a[1][i]);
for(i=0;i<n-1;i++)
line(m+a[0][i],f-a[1][i],m+a[0][i+1],f-a[1][i+1]);
line(m+a[0][0],f-a[1][0],m+a[0][i],f-a[1][i]);
printf("Enter the scaling");
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
c[i][j]=c[i][j]+(b[i][k]*a[k][j]);
}
}
}
for(i=0;i<n-1;i++)
line(m+c[0][i],f-c[1][i],m+c[0][i+1],f-c[1][i+1]);
line(m+c[0][0],f-c[1][0],m+c[0][i],f-c[1][i]);
getch();
}
