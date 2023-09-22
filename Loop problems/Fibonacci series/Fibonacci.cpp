#include<iostream>
using namespace std;

// nth fibonacci number generator
int fib(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(){
  int n;
  cout<<"Enter the number";
  cin>>n;

  
//   int last =0 ,prev =1 ,curr;
//  cout<<last<<" "<<prev<<" ";
//   for(int i=2;i<n;i++){
//      curr = prev + last;
//      last =prev;
//      prev =curr;
//      cout<<curr<<" ";
//   }

  int ans =fib(n);
  cout<<ans;

}