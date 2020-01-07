//Area for shapes
#include<iostream.h>
#include<conio.h>
void main()
{
int c,s,a,l,b;
float area;
clrscr();
cout<<"\nArea Menu -";
cout<<"\n1.Triangle";
cout<<"\n2.Square";
cout<<"\n3.Rectangle";
cout<<"\n4.Exit ?";
cout<<"\nEnter your choice(1-4):";
cin>>c;
switch(c)
{
case 1:cout<<"\nEnter side of triangle:";
       cin>>s;
       area=0.43*s*s;
       cout<<"\nArea="<<area;
       break;
case 2:cout<<"\nEnter side of square:";
       cin>>a;
       area=a*a;
       cout<<"\nArea="<<area;
       break;
case 3:cout<<"\nEnter length and breadth:\n";
       cin>>l>>b;
       area=l*b;
       cout<<"\nArea="<<area;
       break;
default:break;
}
getch();
}