#include<iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate n choose r (nCr)
int nCr(int n, int r) {
    if (n < r) {
        return 0; // Invalid input
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main(){
  int n , r;
  cout<<"Enter a number  n & r : ";
  cin>>n>>r;

  int f = nCr(n,r);
  cout<<" Ncr  : "<<f<<endl;
 return 0;
}
