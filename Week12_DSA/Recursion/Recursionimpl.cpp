#include<iostream>
using namespace std;

// recursive approch
void Birthdaywish(int n){
  if(n == 0){
    cout<<"Happy Birthday !";
    return ;
  }

  cout<< n << " Day's left of birthday "<<endl;
  Birthdaywish(n-1);
}

int main()
{
  int n=5;

  // iterative approch 
  // for(int i=n;i>0;i--){
  //   cout<<i<<" Day's left for birthday"<<endl;
  // }

  // cout<<"Happy Birthday";
  Birthdaywish(3);
  return 0;
}