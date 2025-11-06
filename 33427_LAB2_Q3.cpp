#include<iostream>
#include<ctime>
#include<algorithm>
using namespace std;
int main() {
srand(time(0));
double num1 = (double) rand()/RAND_MAX;
double num2 = (double) rand()/RAND_MAX;
double num3 = (double) rand()/RAND_MAX;

cout<<"random numbers are\n"<<num1<<"\n" <<num2 <<"\n"<<num3<<endl;
double largest = max(num1, max (num2,num3));
cout<<"The largest number is: "<<largest<< endl;
double smallest = min(num1, max (num2, num3));
cout <<"The smallest number is:" <<smallest<< endl;

double Average = (num1+num2+num3)/3;
cout <<"the average is:"<< Average;
return 0;
}
