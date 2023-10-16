#include<iostream>
using namespace std;

int main(){
  int arr[1000];
  int n;
  cout<<"Enter the size of array : ";
  cin>>n;

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  // Intersion sort logic 
  for(int i=1;i<n;i++){
    for(int j =i;j>0;j--){
       if(arr[j] < arr[j-1]){
        // swapping the arr[j] and arr[j-1] variable 
        int temp = arr[j];
        arr[j] =arr[j-1];
        arr[j-1] = temp;
       }
       else 
       break;
    }
  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}