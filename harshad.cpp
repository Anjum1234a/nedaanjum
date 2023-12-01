#include<iostream>
using namespace std;
int main()
{
	int sum=0,temp,num;
	cout<<endl<<"enter the number";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		sum=sum+temp%10;
		temp=temp/10;
		num=num/10;
	}
	if(num%sum==0)
	cout<<"harshad number"<<endl;
	else
	cout<<"not harshad"<<endl;
}
