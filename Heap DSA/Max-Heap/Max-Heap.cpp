#include<iostream>
using namespace std;

class MaxHeap{
 int * arr;
 int size ; //total elements in heap
 int total_size; // total size of the array

 public:
 MaxHeap(int n){
  arr =new int[n];
  size =0;
  total_size =n;
 }

//  inert Into the heap
void insert(int val)
{
//  if size is available or not 
if(size == total_size)
{
  cout<<"Heap Overflow\n";
  return; 
}
arr[size] =val;
int index =size;
size++;

// compare it with its parent 
while(index >0 && arr[(index-1)/2] < arr[index])
{
  swap(arr[index],arr[(index-1)/2]);
  index =(index-1)/2;
}

cout<<arr[index]<<" is inerted into the heap"<<endl;
}

// Heapify
void Heapify(int index)
{
  int largest =index;
  int left = 2*index+1;
  int right = 2*index+2;

  // largest will store the index of element which is greater btw parent left child and right child
  if(left < size && arr[left] > arr[largest])
  largest =left;
  if(right < size && arr[right] > arr[largest])
   largest =right;

  if(largest !=index)
  {
    swap(arr[index],arr[largest]);
    Heapify(largest);
  }
}

// Delete operation 

void Delete()
{
  if(size == 0)
  {
    cout<<"Heap UnderFlow\n";
    return;
  }
  cout<<arr[0]<<" Deleted from the heap\n";
  arr[0] = arr[size-1];
  size--;

  if(size == 0)
  return;

  Heapify(0);
}

void print()
{
  for(int i=0;i<size;i++)
  cout<<arr[i]<<" ";
}
};

int main()
{
  MaxHeap H1(6);
  H1.insert(4);
  H1.insert(14);
  H1.insert(90);
  H1.Delete();
  H1.insert(144);
  H1.insert(190);
   H1.Delete();
  H1.insert(10);
  H1.insert(11);
   H1.Delete();
   H1.Delete();
   H1.Delete();
   H1.Delete();
   H1.Delete();
   H1.Delete();
  H1.print();
}