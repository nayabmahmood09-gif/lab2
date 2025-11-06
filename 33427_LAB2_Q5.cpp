#include<iostream>
using namespace std;
int main() {
cout << "Enter a 9-digit number: ";
long long x;
cin >> x;
int d1 = x / 100000000;
int d2 = (x % 100000000) / 10000000;
int d3 = (x % 10000000) / 1000000;
int d4 = (x % 1000000) / 100000;
int d5 = (x % 100000) / 10000;
int d6 = (x % 10000) / 1000;
int d7 = (x % 1000) / 100;
int d8 = (x % 100) / 10;
int d9 = x % 10;
int sum = d1*1 + d2*2 + d3*3 + d4*4 + d5*5 + d6*6 + d7*7 + d8*8 + d9*9;
int checksum = sum % 11;
cout << "Full ISBN number is: ";
cout << d1 << d2 << d3 << d4 << d5 << d6 << d7 << d8 << d9;
if (checksum == 10) cout << 'X';
else cout << checksum;
cout << endl;
return 0;
}
