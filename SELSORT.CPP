//Selection sorting
#include<iostream.h>
#include<conio.h>
void sort(int[],int);
void main()
{ clrscr();
int item,n,ar[50],index;
cout<<"how many elements you want to enter :\n";
cin>>n;
cout<<"\nenter array elements :\n";
for(int i=0;i<n;i++)
{
cin>>ar[i];
}
sort(ar,n);
cout<<"\nthe sorted data is :\n";
for(i=0;i<n;i++)
{ cout<<ar[i]<<"\n";
}
getch();
}
void sort( int ar[],int n)
{
int spos,temp;
for(int i=0;i<n-1;i++)
{spos=i;
for(int j=i+1;j<n;j++)
if(ar[spos]>ar[j])
spos=j;
temp=ar[spos];
ar[spos]=ar[i];
ar[i]=temp;
}
}