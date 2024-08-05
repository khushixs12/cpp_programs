//wap to demonstrate the use of returning a reference variable.
#include<iostream>
#include<conio.h>
using namespace std;
int x;
int& retByRef();
int main()
{
retByRef()=10;
cout<<"the value is"<<endl;
cout<<x<<endl;
getch();	
}
int& retByRef()
{
	return x;
}
