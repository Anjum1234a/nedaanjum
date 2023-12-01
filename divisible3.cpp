#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<endl<<"enter the number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%3==0)
		cout<<endl<<"the number is divisible by 3";
		else
		cout<<"the number is not divisible by 3";
	}
}
