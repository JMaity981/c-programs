	 /*NEWTON RAPHSON METHOD*/
	 /***********************/
 #include<stdio.h>
 #include<math.h>
 float f(float x)
 {
 //return x*log10(x)-1.2;
 return exp(x)-(3*x);
 }
 float df(float x)
{
// return log10(x)+0.43429;
return exp(x)-3;
}
 main()
 {
 int itr,maxitr;
 float h,x0,x1,aerr;
 printf("Enter x0,allowed error maximum iterations\n");
 scanf("%f %f %d",&x0,&aerr,&maxitr);
 for(itr=1;itr<=maxitr;itr++)
 {
 h=f(x0)/df(x0);
 x1=x0-h;
 printf("Iteration no. %3d,x=%9.6f\n",itr,x1);
 if(fabs(h)<aerr)
 {printf("After %3d iterations,root=%8.6f\n",itr,x1);
 return 0;
 }
 x0=x1;
 }
 printf("Iteration not sufficient solution does not converge\n");
 return 1;
 }


 // Output
 // Enter x0,allowed error maximum iterations
 // 0.5  0.0001  10
 // Iteration no.  1,x = 0.610060
 // Iteration no.  2,x = 0.618997
 // Iteration no.  3,x = 0.619061
 // After 3 iterations,root= 0.619061
