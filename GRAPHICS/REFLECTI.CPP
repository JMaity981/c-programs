# include<stdio.h>
# include<conio.h>
# include<graphics.h>
# include<math.h>
void main()
{
   int gd=DETECT,gm,s;
   float td,i,j,k,r,n,a[10][10],b[10][10],c[10][10],m,f,t;
   initgraph(&gd,&gm,"C:\\TC\\bgi");
   line(0,239,639,239);
   line(319,0,319,479);
   m=getmaxx()/2;
   f=getmaxy()/2;
   printf("How many Point:");
   scanf("%f",&n);
   printf("Enter the Point:");
   for(i=0;i<n;i++)
   scanf("%f%f",&a[0][i],&a[1][i]);
   for(i=0;i<n-1;i++)
   line(m+a[0][i],f-a[1][i],m+a[0][i+1],f-a[1][i+1]);
   line(m+a[0][0],f-a[1][0],m+a[0][i],f-a[1][i]);
   printf("To reflect X axis, press 1\n To reflect Y axis, Press 2\n To reflect X=Y line, press 3\n To reflect Y=-X line, Press 4\t");
   scanf("%d",&s);
   if(s==1)
   {
      b[0][0]=1;
      b[0][1]=0;
      b[1][0]=0;
      b[1][1]=-1;
   }
   if(s==2)
   {
      b[0][0]=-1;
      b[0][1]=0;
      b[1][0]=0;
      b[1][1]=1;
   }
   if(s==3)
   {
      b[0][0]=0;
      b[0][1]=1;
      b[1][0]=1;
      b[1][1]=0;
   }
   if(s==4)
   {
      b[0][0]=0;
      b[0][1]=-1;
      b[1][0]=-1;
      b[1][1]=0;
   }
   for(i=0;i<2;i++)
   {
       for(j=0;j<n;j++)
       {
	   c[i][j]=0;
	   for(k=0;k<2;k++)
	   c[i][j]=c[i][j]+(b[i][k]*a[k][j]);
       }
   }
   for(i=0;i<n-1;i++)
   line(m+c[0][i],f-c[1][i],m+c[0][i+1],f-c[1][i+1]);
   line(m+c[0][0],f-c[1][0],m+c[0][i],f-c[1][i]);
   getch();
}