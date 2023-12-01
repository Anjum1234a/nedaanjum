#include <iostream>
#include <cmath>
using namespace std;
bool isBuzz(int num){
   return (num % 10 == 7 || num % 7 == 0);
}
int main(){
   int num = 67;
   if (isBuzz(num))
      cout << "its a buzz Number\n";
   else
      cout << "its not a buzz Number\n";
}

