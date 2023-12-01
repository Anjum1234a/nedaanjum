#include<iostream>
using namespace std;
int main()
{
	int num,squ,i,sum=0;
	cout<<endl<<"enter the number";
	cin>>num;
	squ=num*num;
	while(squ!=0)
	{
		sum=sum+squ%10;
		squ=squ/10;
	}
	if(sum==num)
	cout<<endl<<"is neon";
	else
	cout<<endl<<"is not neon";
}

