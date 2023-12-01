#include<iostream>
using namespace std;
#include<string>
class student
{
	public:
		int roll_number;
		int phone_number;
		string address;
};
int main()
{
	student s1;
	s1.roll_number=4;
	s1.phone_number=1223456678;
	s1.address="saveetha";
	student s2;
	s2.roll_number=5;
	s2.phone_number=1245638229;
	s2.address="saveetha";
	cout<<endl<<s1.roll_number<<" "<<s1.phone_number<<" "<<s1.address<<endl;
	cout<<endl<<s2.roll_number<<" "<<s2.phone_number<<" "<<s2.address<<endl;
}
