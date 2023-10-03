#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  
  int i = 1;
  
  while (i <= n) {
    if (i == 5) {
      i++;  // Increment i to avoid an infinite loop
      continue;
    }

    cout << i << " ";
    i++;
  }

  return 0;
}
