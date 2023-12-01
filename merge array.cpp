#include<iostream>
using namespace std;
int main()
{
 
  int farr[50],Sarr[50], fsize,Ssize,size, i, j, k, mergarr[100];
  cout<<"Enter Array 1 Elements : "<<endl;
  for(i=0; i<fsize; i++)
  {
    cin>>farr[i];
     mergarr[i]=farr[i];
  }
  cout<<"Enter Array 2 Elements : "<<endl;
  for(i=0; i<Ssize; i++)
  {
    cin>>Sarr[i];
  }
  size=fsize+Ssize;
  for(i=0, k=fsize; k<size && i<Ssize; i++, k++)
  {
    mergarr[k]=Sarr[i];
  }
  cout<<"the array after merging is :\n"<<endl;
  for(i=0; i<size; i++)
  {
    cout<<mergarr[i]<<"  ";
  }
}
