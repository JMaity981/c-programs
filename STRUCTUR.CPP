#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
char name;
int roll;
float marks;
}st[50];
int main()
{
int n;
printf("How many students");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the name of the students");
gets(st[i].name);
printf("enter he roll of the students");
scanf("%d",&st[i].roll);
printf("Entre the marks of the students");
scanf("%f",&st[i].marks);
}
for (i=0;i<n;i++)
{
puts(st[i].name);
printf("Roll is %d",st[i].roll);
printf("Marks is %f",st[i].marks);
}
getch();
return 0;
}