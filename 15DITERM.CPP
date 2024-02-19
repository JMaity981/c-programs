#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,dit;
    clrscr();
    printf("\n\n");
    printf("\tEnter the 3*3 order of matrix eliments:\n\t");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("\t%d",&a[i][j]);
    dit=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    printf("\tDiterminate of the matrix=%d",dit);
    getch();
}