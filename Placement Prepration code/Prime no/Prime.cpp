#include<iostream>
using namespace std;

int main()
{
  int n =18;
  int cnt =0;
  if(n <= 1) cout<< " NON Prime"<<endl;
  else{
    for(int i=1;i<=n;i++)
    {
    if(n%i == 0)
       cnt++;
   }
  } 
  if(cnt >2)
  cout<<"non prime";
  else 
  cout<<"prime";
return 0;
}