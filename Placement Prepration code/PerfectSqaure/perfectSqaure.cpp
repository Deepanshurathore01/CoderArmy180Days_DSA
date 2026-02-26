#include<iostream>
#include<cmath> // for sqrt() function
using namespace std;

int main()
{
    int num = 16; // Example number
    int ans = sqrt(num); // Find the square root of the number

    if(ans * ans == num) {
        cout << "Perfect square";
    } else {
        cout << "Not a perfect square";
    }

    return 0;
}
