#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,x,y,n;
	n=sizeof arr/sizeof arr[i];
	cout<<"enter the elements of array";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the positions to swapped";
	cin>>x>>y;
	int temp=arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
	cout<<endl<<"elements after swapping";
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<endl<<" ";
	}
}
