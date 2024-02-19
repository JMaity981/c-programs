# include<iostream.h>
# include<conio.h>
class add
{
   private:
   int x,y;
   public:
   void input(void);
   void sum(void);
};
void add::input()
{
   cout<<"Enter any two numbers"<<"\n";
   cin>>x>>y;
}
void add::sum()
{
   int z;
   z=x+y;
   cout<<"Result="<<z;
}
void main()
{
   add obj;
   obj.input();
   obj.sum();
   getch();
}
