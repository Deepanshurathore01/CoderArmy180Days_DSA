#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to print Pascal's Triangle
void printPascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print spaces for formatting
        for (int j = 0; j < rows - i; j++) {
            cout << " ";
        }

        // Print Pascal's Triangle values
        for (int j = 0; j <= i; j++) {
            cout << factorial(i) / (factorial(j) * factorial(i - j)) << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    printPascalTriangle(rows);

    return 0;
}
