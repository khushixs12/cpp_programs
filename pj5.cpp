//wap using class student which stores the details about the roll number name and names of five subjects.
#include<iostream>
#include<conio.h>
using namespace std;

class student{
	int roll_no;
	char name[20];
	int marks[5];
	int total;
	public:
		void getdetails();
		void display();
		void gettotal();
};
void student::getdetails()
{
	cout<<"enter roll number and name"<<endl;
	cin>>roll_no>>name;
	gettotal();
}
void student::gettotal()
{
	total=0;
	cout<<"enter marks"<<endl;
	
	for(int i=0;i<5;i++)
{
	cin>>marks[i];
	total=total+marks[i];
}
}
void student::display()
{
	cout<<roll_no<<""<<name<<"";
	for(int i=0;i<5;i++)
	{
		cout<<""<<marks[i]<<"";
	}
	cout<<"total marks is"<<total;
}
int main()
{
	student si;
	si.getdetails();
	si.display();
	getch();
	}
