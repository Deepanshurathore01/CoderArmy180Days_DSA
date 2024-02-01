#include<iostream>
using namespace std;

class Node{
public :
int data;
Node *next;

Node(int value)
{
  data =value;
  next =NULL;
}
};

int main()
{
  Node *Head;
  Head = NULL;

  int arr[4] = {2,4,6,8};
// Insert the node at begining 
  for(int i=0;i<4;i++)
  {
    // if linked list doesn't exists
    if(Head ==NULL)
    {
      Head =new Node(arr[i]);
    }
    // else liked list already exsists 
    else{
      Node * temp;
      temp =new Node(arr[i]);
      temp->next =Head;
      Head =temp;
    }
  }

// print the data of linked lsit 
  Node * temp =Head;
  while(temp !=NULL)
  {
    cout<<temp->data<<"-> ";
    temp=temp->next;
  }
}