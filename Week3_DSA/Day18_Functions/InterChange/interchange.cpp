#include <iostream>
using namespace std;

void swapThree(int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int x, y, z;
    cout << "Enter three values: ";
    cin >> x >> y >> z;

    swapThree(x, y, z);

    cout << "After swapping:" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    return 0;
}
