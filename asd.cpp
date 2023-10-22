#include<iostream>
using namespace std;
class student
{	
	public:

	string br,name;
	int roll_no;

	void details()
	{
		cout<<"Enter branch : ";
		cin>>br;
		cout<<"Enter name : ";
		cin>>name;
		cout<<"Enter Roll Number : ";
		cin>>roll_no;
	}	
};

class std: public student
{
	void display()
	{
		cout<<"\nBranch : ";
		cout<<"\nName : ";
		cout<<"\nRoll Number : ";	
	}	
};
int main()
{
	std s1;
	s1.display();
	s1.details();
}
