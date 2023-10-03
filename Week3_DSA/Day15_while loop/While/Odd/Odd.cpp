#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of odd numbers to print: ";
  cin >> n;

  int i = 1;
  int count = 0;

  while (count < n) {
    if (i % 2 != 0) {
      cout << i << " ";
      count++;
    }
    i++;
  }

  return 0;
}
