#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<endl<<"enter the number ";
	cin>>n;
	for(i=1;i<=n;i++){
	
	if(n%i==0)
	{
		count++;
	}
}
	if(count==2)
	{
		cout<<endl<<"the number is prime";
	}
	else
	{
		cout<<endl<<"the number is not prime";
	}
}
