//wap to calculate  the area of circle,rectangle and square using function overloading.
#include<iostream>
#include<conio.h>
using namespace std;

int area(int);
float area(float,float);
float area(float);

int main()
{
	int a;
	float l,b;
	float s,y,z;
	int x;
	cout<<"enter the sides of a square in"<<endl;
	cin>>a;
	cout<<"enter the length and breadth of a rectangle\n"<<endl;
	cin>>l>>b;
	cout<<"enter the radius of a circle in"<<endl;
	cin>>s;
	x=area(a);
	y=area(l,b);
	z=area(s);
	cout<<endl;
	cout<<"area of square is"<<x<<endl<<"area of rectangle is"<<y<<endl<<"area of circle is"<<z<<endl;
	getch();
	return 0;
}
int area(int z)
{
	return(z*z);
}
float area(float m,float n)
{
	return(m*n);
}
float area(float r)
{
	return(3.14*r*r);
}
