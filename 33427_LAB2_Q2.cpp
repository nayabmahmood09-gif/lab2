#include <iostream>
#include <cmath>   // for sqrt()

using namespace std;

int main() {
    int x, y;
    cout << "Enter x and y coordinates: ";
    cin >> x >> y;

    double distance = sqrt((x * x) + (y * y));

    cout << "Distance from (" << x << ", " << y << ") to (0, 0) is: " 
         << distance << endl;

    return 0;
}