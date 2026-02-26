#include<iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    int num = 12; // Example number
    int sum = 0;

    // Loop through possible factors of num
    for(int i = 2; i <= num; i++) {
        if(num % i == 0 && isPrime(i)) {
            sum += i; // Add the prime factor to the sum
        }
    }

    cout << "Sum of prime factors: " << sum << endl;
    return 0;
}
