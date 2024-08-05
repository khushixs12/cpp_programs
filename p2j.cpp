//wap to demonstrate the use of default arguments in function overloading.
#include<iostream>
#include<conio.h>
using namespace std;
int multiply(float a,int b,int c =5);
int multiply(int x,int y =9);
float multiply(float d,float e,float r =8.6);
int main()
{
	int m,n,f;
	int b,x;
	float a,d,e;
	cout<<"enter two values"<<endl;
	cin>>a>>b;
	cout<<"enter one value"<<endl;
	cin>>x;
	cout<<"enter two float values"<<endl;
	cin>>d>>e;
	m= multiply(a,b);
	m= multiply(x);
	f= multiply(d,e);
	cout<<"product of three int is "<<m<<endl;
	cout<<"product of two int is"<<n<<endl;
	cout<<"product of two float is"<<f<<endl;
	getch();
	return 0;
}
int multiply(float a,int b,int c)
{
	return(a*b*c);
}
int multiply(int x,int y)
{
	return(x*y);
}
float multiply(float d,float e,float r)
{
	return(d*e*r);
}
