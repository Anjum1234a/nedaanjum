#include<iostream>
using namespace std;
int main()
{
	int i,n,fact=1;
	cout<<endl<<"enter the number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		cout<<endl<<"factorial"<<fact;
	}
}
