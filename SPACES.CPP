//counts spaces
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
clrscr();
char str[99];
int i,count=0;
cout<<"enter any string:\n";
gets(str);
for(i=0;str[i]!='\0';i++)
if(str[i]==' ')
count++;
cout<<"\nno. of spaces are: "<<count;
getch();
return 0;
}