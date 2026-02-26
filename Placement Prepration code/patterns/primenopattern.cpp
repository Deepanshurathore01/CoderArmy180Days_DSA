#include<iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n = 3;  // Number of rows
    int primeCount = 0;  // Count of primes printed
    int currentNum = 2;  // Start with the first prime number

    for (int i = 1; i <= n; i++) {
        // Print i prime numbers in each row
        int primesPrinted = 0;
        while (primesPrinted < i) {
            if (isPrime(currentNum)) {
                cout << currentNum << " ";
                primesPrinted++;
            }
            currentNum++;
        }
        cout << endl;
    }
    
    return 0;
}
