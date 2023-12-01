#include<iostream>
using namespace std;
int main()
{
	int n,r,sum=0,temp;
	cout<<endl<<"enter the number";
		cin>>n;
	temp=n;
	while(n>0)
	{
	
	r=n%10;
	sum=sum*10+r;
	n=n/10;}
	if(temp==sum)
	cout<<endl<<"the number is palindrome";
	else 
	cout<<endl<<"the number is not a palindrome";
	}
