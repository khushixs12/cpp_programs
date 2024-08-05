//create a function power() using function to raise a number m to power n
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
double power(double m,int n=2);
int main()
{
	int n;
	double m;
	cout<<"enter the value of m"<<endl;
	cin>>m;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	cout<<"power of"<<m<<""<<"raise to"<<n<<"is"<<""<<power(m,n);
	getch();
	return 0;
}
double power(double m,int n)
{
	return(pow(m,n));
}
