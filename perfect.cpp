#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0,divi;
	cout<<endl<<"enter the number";
	cin>>n;
	for(i=1;i<n;i++)
	{
		divi=n%i;
		if(divi==0)
		{
		sum=sum+i;
	}
	if(sum==n)
	cout<<endl<<"the number is perfect"<<n;
	else
	cout<<endl<<"the number is not perfect"<<n;
	}
}
