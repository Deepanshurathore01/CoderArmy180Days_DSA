#include<iostream>
using namespace std;



void Heapify(int arr[],int index,int n)
{
  int largest =index;
  int left =2*index+1;
  int right =2*index+2;

  if(left<n && arr[left]>arr[largest])
  largest =left;

  if(right < n && arr[right] >arr[largest])
  largest =right;

 if(largest !=index)
 {
  swap(arr[largest],arr[index]);
  Heapify(arr,largest,n);
 }
}

// HeapSort 
void SortArray(int arr[],int n)
{
  for(int i=n-1;i>0;i--)
  {
    swap(arr[i],arr[0]);
    Heapify(arr,0,i);
  }
}

void printHeap(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void BuildMaxHeap(int arr[],int n)
{
  for(int i=n/2-1;i>=0;i--)
  {
  Heapify(arr,i,n);
  }
  
}
int main()
{
  int arr[] ={10,3,8,9,5,13,18,14,11,70};
  BuildMaxHeap(arr,10);
  SortArray(arr,10);
  printHeap(arr,10);
  return 0;
}

// Tc : o(n)
// Sc : o(log n) if using recursion in heapify 
// Sc : o(1) if we are using while loop