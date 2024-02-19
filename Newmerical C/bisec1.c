/*BISECTION METHOD*/
/******************/
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 float f(float x)
 {
 return(x*x*x-2*x-5);
 }
 void bisect(float*x,float a,float b,int*itr)
 {
 *x=(a+b)/2;
 ++(*itr);
 printf("Iteration no. %3d X=%7.5f\n",*itr,*x);
 }
 main()
 {
 int itr=0,maxitr;
 float x,a,b,aerr,x1;
 printf("Enter the values of a,b,allowed error,maximum iterations\n");
 scanf("%f %f %f %d",&a,&b,&aerr,&maxitr);
 bisect(&x,a,b,&itr);
 do
 {
 if(f(a)*f(x)<0)
 b=x;
 else
 a=x;
 bisect(&x1,a,b,&itr);
 if(fabs(x1-x)<aerr)
 {
 printf("After %d iterations,root = %7.5f\n",itr,x1);
 return 0;
 }
 x=x1;
 }
 while(itr<maxitr);
 printf("Solution does not converge iteration not sufficient");
 return 1;
 }




 // Output
 // Enter the values of a,b,allowed error,maximum iterations
 // 2 3 .0001 15
 // Iteration no.  1 x = 2.50000
 // Iteration no.  2 x = 2.25000
 // Iteration no.  3 x = 2.12500
 // Iteration no.  4 x = 2.06250
 // Iteration no.  5 x = 2.09375
 // Iteration no.  6 x = 2.10938
 // Iteration no.  7 x = 2.10156
 // Iteration no.  8 x = 2.09766
 // Iteration no.  9 x = 2.09570
 // Iteration no. 10 x = 2.09473
 // Iteration no. 11 x = 2.09424
 // Iteration no. 12 x = 2.09448
 // Iteration no. 13 x = 2.09468
 // Iteration no. 14 x = 2.09454
 // After 14 iterations,root = 2.09454


