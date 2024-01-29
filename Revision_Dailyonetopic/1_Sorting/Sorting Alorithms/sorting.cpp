#include<iostream>
using namespace std;


void selection_sort(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {
    int index =i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[index])
      index =j;
    }
    swap(arr[i],arr[index]);
   }

  /* this is the simplest sorting algorithm in this algoritm firt find the minimum
  element and palce it into arr[0] then search in next half subarray an find min element
  and so on..
  Tc : O(n^2)
  Sc : O(1)*/
}

void Bubble_Sort(int arr[],int n)
{
  for(int i=n-2;i>=0;i--)
  {
    bool swapped =0;
    for(int j=0;j<=i;j++)
    {
      if(arr[j] > arr[j+1])
      {
        swap(arr[j],arr[j+1]);
        swapped =1;
      }
    }
    if(swapped == 0) break;
  }

  /*
  In this sorting alorithm first select the grater element and move it from the last and so it so on
  Tc : o(N^2)
  Sc : O(1)*/
}

void Insertion_sort(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=i;j>0;j--)
    {
      if(arr[j] < arr[j-1]){

      swap(arr[j],arr[j-1]);
      }
      else{
        break;
      }
      
    }
  }
  /*
  In this insertion sort algorithm the process are conditios are chek side by side and 
  make the sorting as well
  Tc : O(n^2)
  Sc : O(1)*/
}

int main()
{
  int arr[] = {4,7,8,5,3,1};
  // selection_sort(arr,6);
  // Bubble_Sort(arr,6);
  Insertion_sort(arr,6);
  for(int i=0;i<6;i++)
  {
    cout<<arr[i]<<" ";
  }
}