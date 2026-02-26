#include<iostream>
using namespace std;

int main()
{ 
   long long num =123222222222222333;
   int cnt =0;
   int digit =2;

   while(num){
    int dig = num%10;
    if(dig == digit)cnt++;
    num /=10;
   } 

   cout<<"the count of digit "<<digit << " in number is : "<<cnt;
    return 0;
}
