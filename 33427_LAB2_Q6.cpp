#include <iostream>
#include <algorithm> // for min() and max()

using namespace std;

int main() {
    int int1, int2, int3;
    cout << "Enter three integers: ";
    cin >> int1 >> int2 >> int3;

    int largest = max(int1, max(int2, int3));

    cout << "The largest number is: " << largest << endl;

    return 0;
}