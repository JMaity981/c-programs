# include<stdio.h>
# include<conio.h>
# include<graphics.h>
# include<dos.h>
void ellipsemidpoint(float,float,float,float);
void drawellipse(float,float,float,float);
void main()
{
    float xc,yc,a,b;
    int gd=DETECT,gm;
    clrscr();
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("enter the center coordinates of the ellipse:");
    scanf("%f%f",&xc,&yc);
    printf("enter semi-major axis coordinate:");
    scanf("%f",&a);
    printf("enter semi-minor axis coordinate:");
    scanf("%f",&b);
    ellipsemidpoint(xc,yc,a,b);
    getch();
}
void ellipsemidpoint(float xc,float yc,float a,float b)
{
    clrscr();
    float asq=a*a,bsq=b*b;
    float x=0,y=b;
    float fx=0,fy=2*asq*y;
    float p=bsq-(asq*b)+(0.25*asq);

    //REGION-1 PLOTTING
    drawellipse(xc,yc,x,y);
    while(fx<fy)
    {
       x++;
       fx=fx+2*bsq;
       if(p<0)
       p=p+fx+bsq;
       else
       {
	  y--;
	  fy=fy-2*asq;
	  p=p+fx+bsq-fy;
       }
       drawellipse(xc,yc,x,y);
       delay(20);
    }

    //REGION-2 PLOTTING
    p=bsq*(x+0.5)*(x+0.5)+asq*(y-1)*(y-1)-asq*bsq;
    while(y>0)
    {
	y--;
	fy=fy-2*asq;
	if(p>=0)
	p=p-fy+asq;
	else
	{
	    x++;
	    fx=fx+2*bsq;
	    p=p+fx-fy+asq;
	}
	drawellipse(xc,yc,x,y);
	delay(20);
    }
}
void drawellipse(float xc,float yc,float x,float y)
{
   putpixel(xc+x,yc+y,GREEN);
   putpixel(xc-x,yc+y,RED);
   putpixel(xc+x,yc-y,YELLOW);
   putpixel(xc-x,yc-y,BLUE);
}