#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
int n;
cout<<"enter the size of the vector";
cin>>n;

int arr[100] = {6,4,5,-3,2,8};

vector<int> prefix(n);
prefix[0] =arr[0];
for(int i=1;i<n;i++){
 prefix[i] =prefix[i-1]+arr[i];
}

for(int i=0;i<n;i++){
  cout<<prefix[i]<<" ";
}


  return 0;
}