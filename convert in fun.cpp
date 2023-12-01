#include<iostream>
using namespace std;
float convert(float);
int main()
{
  float c;
  cin>>c;
  cout<<"in fahrenheit"<<convert(c);
}
float convert(float c)
{
  float f;
  f=(c*9/5)+32;
  return f ;
}
