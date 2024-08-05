//wap for simple use of scope resolution.
#include<iostream>
#include<conio.h>
using namespace std;
int a=10;
int main()
{
	int a=20,b=5;
	cout<<"a*b="<<a*b<<endl;
	cout<<"a*b="<<::a*b<<endl;
	getch();
}
