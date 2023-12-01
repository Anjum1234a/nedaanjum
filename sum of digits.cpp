#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,r;
	cout<<endl<<"enter the number ";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
		
	}
	cout<<endl<<"the sum is"<<sum;
}
