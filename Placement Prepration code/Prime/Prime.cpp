#include<iostream>
using namespace std;

// Naive approch 
// tc : o(n^2)
bool isPrime(int n){
       if(n <= 1) return false;

       for(int i=2;i<n;i++){
           if(n%i == 0)
           return false;
       }
       return true;
   }
    int countPrimes(int n) {
        int c =0 ;
         
         for(int i=0;i<n;i++){
             if(isPrime(i)){
                 ++c;
             }
         }
         return c;
    }


// Sieve of Eratosthenes algorithm. 
// tc : O(n *log(logn))
 int countPrimes(int n) {
    if (n <= 2) return 0;

    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    int ans = 0;
    for (int i = 2; i * i < n; i++) {
        if (prime[i]) {
            for (int j = i * i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i < n; i++) {
        if (prime[i]) {
            ans++;
        }
    }

    return ans;
}   