#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int b=0,d=0,o=0,i=0,r,j=0;
clrscr();
printf("Enter your chois of conversion:press 1 for Binary to Desimal,press 2 for Desimal to Binary,press 3 for Octal to Desimal,press 4 for Desimal to Octal,press 5 for Binary to Octal,press 6 for Octal to Binary:");
scanf("%d",&i);
switch(i)
{
case 1:
printf("Enter the Binary number:");
scanf("%d",&b);
while(b!=0)
{
r=b%10;
d=d+r*pow(2,j);
b=b/10;
j++;
}
printf("Desimal number is %d",d);
break;
case 2:
printf("Enter the Desimsl number:");
scanf("%d",&d);
while(d!=0)
{
r=d%2;
b=b+r*pow(10,j);
d=d/2;
j++;
}
printf("Binary number is %d",b);
break;
case 3:
printf("Enter the Octal number:");
scanf("%d",&o);
while(o!=0)
{
r=o%10;
d=d+r*pow(8,j);
o=o/10;
j++;
}
printf("Desimal equevalent number is %d",d);
break;
case 4:
printf("Enter the desimal number:");
scanf("%d",&d);
while(d!=0)
{
r=d%8;
o=o+r*pow(10,j);
d=d/8;
}
printf("Octal equevalent number is %d",o);
break;
case 5:
printf("Enter the Binary number:");
scanf("%d",&b);
while(b!=0)
{
r=b%8;
o=o+r*pow(2,j);
b=b/8;
}
printf("Octal equevalent number is %d",o);
break;
case 6:
printf("Enter rhe Octal number:");
scanf("%d",&o);
while(o!=0)
{
r=o%2;
b=b+r*pow(8,j);
o=o/2;
}
printf("Binary equevqlent number is %d",b);
break;
default:
printf("you enter wrong key");
}
getch();
}

