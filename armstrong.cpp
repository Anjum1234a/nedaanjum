#include<iostream>
using namespace std;
int main()
{
	int num,temp,rem,sum=0;
	cout<<endl<<"enter the number";
	cin>>num;
	temp=num;
	while(num>0)
	{
	rem=num%10;
	sum=sum+rem*rem*rem;
	temp=temp/10;	
	}
	if(sum==num)
	cout<<endl<<"the number is armstrong"<<num;
	else
	cout<<endl<<"the number is not armstrong"<<num;
	return 0;
}
