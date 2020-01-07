//Largest of 3 numbers
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int x,y,z,max;
cout<<"enter three integer:\n";
cin>>x>>y>>z;
max=x;
if(y>max)
max=y;
if(z>max)
max=z;
cout<<"\nthe largest of:"<<x<<","<<y<<","<<z<<"."<<"is  "<<max;
getch();
return 0;
}