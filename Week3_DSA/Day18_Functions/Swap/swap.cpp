#include <iostream>
using namespace std;

void swapTwo(int &a, int &b) {

  a = a^b;
  b = a^b;
  a = a^b;
    
}

int main() {
    int x, y, z;
    cout << "Enter two values: ";
    cin >> x >> y;

    swapTwo(x, y);

    cout << "After swapping:" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;


    return 0;
}
