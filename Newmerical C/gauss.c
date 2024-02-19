/***************************/
/*GAUSS ELIMINATION METHOD*/
/**************************/
#include<stdio.h>
#define N 3
void main()
{
float a[N][N+1],x[N],t,s;
int i,j,k;
printf("Enter the elements of the augmented matrix rowwise\n");
for(i=0;i<N;i++)
for(j=0;j<N+1;j++)
scanf("%f",&a[i][j]);
for(j=0;j<N-1;j++)
for(i=j+1;i<N;i++)
{
t=a[i][j]/a[j][j];
for(k=0;k<N+1;k++)
a[i][k]-=a[j][k]*t;
}
printf("The upper triangular matrix is:-\n");
for(i=0;i<N;i++)
{
for(j=0;j<N+1;j++)
printf("%8.4f",a[i][j]);
printf("\n");
}
for(i=N-1;i>=0;i--)
{
s=0;
for(j=i+1;j<N;j++)
s+=a[i][j]*x[j];
x[i]=(a[i][N]-s)/a[i][i];
}
printf("The solution is:-\n");
for(i=0;i<N;i++)
printf("x[%3d]=%7.4f\n",i+1,x[i]);
}


// Output
// Enter the elements of the augmented matrix rowwise
// 2 1 1 10
// 3 2 3 18
// 1 4 9 26
// The upper triangular matrix is:-
// 2.0000  1.0000  1.0000  10.0000
// 0.0000  0.5000  1.5000  3.0000
// 0.0000  0.0000 -2.0000  0.0000
// The solution is:-
// x[1] = 2.0000
// x[2] = 6.0000
// x[3] = 0.0000


