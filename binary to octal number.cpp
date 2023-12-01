#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int binarynumber, octalnumber = 0, decimalnumber = 0;
    int i = 0, r;

    cout << "Enter a binary number: ";
    cin >> binarynumber;

    while (binarynumber != 0) {
        r = binarynumber % 10;
        decimalnumber += r * pow(2, i);
        ++i;
        binarynumber /= 10;
    }

    int j = 1;

    while (decimalnumber != 0) {
        octalnumber += (decimalnumber % 8) * j;
        decimalnumber /= 8;
        j *= 10;
    }

    cout << "Octal number: " << octalnumber << endl;

    return 0;
}
