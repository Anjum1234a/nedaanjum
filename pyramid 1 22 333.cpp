#include<iostream>
using namespace std;
int main()
{
	int i,n,j,s;
	cout<<"enter the number";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(s=0;s<n-i;s++)
		{
			cout<<"";
		}
		for(j=1;j<=i;j++)
		{
			cout<<i,j,n,s;
		}
		cout<<"\n";
	}
}
