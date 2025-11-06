#include <iostream>
#include <algorithm> // for min() and max()

using namespace std;

int main() {
    int x, y, z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    int smallest = min(x, min(y, z));
    int largest = max(x, max(y, z));
    int middle = (x + y + z) - (smallest + largest);

    cout << "Numbers in ascending order: "
         << smallest << " " << middle << " " << largest << endl;

    return 0;
}