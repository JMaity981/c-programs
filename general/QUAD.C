#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
  float a, b, c, det, r1,r2, real, imag;
  clrscr();
  printf("Enter coefficients a, b and c: ");
  scanf("%f%f%f",&a,&b,&c);
  det=b*b-4*a*c;
  if (det>0)
  {
      r1= (-b+sqrt(det))/(2*a);
      r2= (-b-sqrt(det))/(2*a);
      printf("Roots are: %.2f and %.2f",r1 , r2);
  }
  else if (det==0)
  {
    r1 = r2 = -b/(2*a);
    printf("Roots are: %.2f and %.2f", r1, r2);
  }
  else
  {
    real= -b/(2*a);
    imag = sqrt(-det)/(2*a);
    printf("Roots are: %.2f + %.2f i and %.2f - %.2f i", real, imag, real, imag);
  }
  getch();
}