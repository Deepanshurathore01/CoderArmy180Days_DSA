#include <iostream>
using namespace std;

// Function to check if a number is a perfect number
bool isPerfect(int num) {
    int sum = 1; // 1 is always a divisor
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num && num != 1;
}

// Function to count perfect numbers up to a given limit
int countPerfectNumbers(int limit) {
    int count = 0;
    for (int i = 2; i <= limit; ++i) {
        if (isPerfect(i)) {
            cout << "Perfect number found: " << i << endl;
            count++;
        }
    }
    return count;
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    int result = countPerfectNumbers(limit);
    cout << "Total perfect numbers up to " << limit << ": " << result << endl;

    return 0;
}
