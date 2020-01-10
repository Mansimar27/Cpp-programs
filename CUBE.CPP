//Cube for an int.
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
float cube(float);
float x,y;
cout<<"\nEnter no. whose cube is to be calculated: ";
cin>>x;
y=cube(x);
cout<<"\nThe cube of "<<x<<" is "<<y<<"\n";
getch ();

return 0;
}
float cube(float a)
{
float n;
n=a*a*a;
return(n);
}