#include <iostream>
using namespace std;

void printDiamond(int n) {
    // Full diamond pattern
    for (int i = 1; i <= 2 * n - 1; i++) {
        int spaces = abs(n - i);       // Calculate spaces based on row position
        int stars = 2 * (n - spaces) - 1; // Calculate stars based on spaces
        
        // Print leading spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the diamond pattern: ";
    cin >> n;

    printDiamond(n);

    return 0;
}
