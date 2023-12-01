#include<iostream>
using namespace std;
int main()
{
	int num,temp,sum=0;
	cout<<endl<<"enter the number";
	cin>>num;
	while(sum!=1&&sum!=4)
	{
		sum=0;
		while(num>0)
		{
			temp=num%10;
			sum=sum+(temp*temp);
			num=num/10;
		}
		num=sum;
	}
	if(sum==1)
	cout<<"happy number"<<endl;
	else
	cout<<"not happy number"<<endl;
}
