#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,1,2,44};
	int n,i;
	n=sizeof(arr)/sizeof(arr[0]);
	int freq[100]={0};
	for(i=0;i<n;i++)
	freq[arr[i]]++;
	cout<<endl<<"element\t frequency";
	for(i=0;i<100;i++){
		if(freq[i]>0){
			cout<<endl<<"element\tfrequency"<<i << freq[i];
		}
	}

	return 0;
}
