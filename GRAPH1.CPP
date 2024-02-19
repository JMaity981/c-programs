# include<stdio.h>
# include<conio.h>
# include<graphics.h>
void main()
{
    int x,y,r,gd=DETECT,gm,x1,y1;
    clrscr();
    printf("Enter the value");
    scanf("%d",&r);
    initgraph(&gd,&gm,"C:\\TC\\bgi");
    setcolor(RED);
    x=getmaxx();
    y=getmaxy();
    x1=x/2;
    y1=y/2;
    circle(x1,y1,r);
    getch();
    closegraph();
}
