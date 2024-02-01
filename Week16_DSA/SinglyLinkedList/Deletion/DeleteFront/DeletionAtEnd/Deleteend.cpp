#include<iostream>
using namespace std;

class Node{
public:
int data;
Node *next;

Node(int value)
{
  data =value;
  next =NULL;
}
};

Node* CreateLinkedList(int arr[],int index,int size)
{
  // base case
  if(index == size)
  {
    return NULL;
  }
  Node *temp;
  temp = new Node(arr[index]);
  temp->next =CreateLinkedList(arr,index+1,size);

  return temp;
}

int main()
{
  Node *Head;
  Head =NULL;

  int arr[] ={2,4,6,8,10};

  Head = CreateLinkedList(arr,0,2);

// delete a node at end

if(Head !=NULL)
{
  // only one node is present 
  if(Head->next == NULL)
  {
    Node *temp =Head;
    delete temp;
    Head =NULL;
  }
  // more then one node is present
  else{
    Node* curr =Head;
    Node* prev =NULL;

    // curr next not eqal to null
    while(curr->next!=NULL)
    {
      prev =curr;
      curr =curr->next;
    }
    prev->next =curr->next;
    delete curr;
  }
}




  Node *temp;
temp =Head;
while(temp)
{
  cout<<" "<<temp->data<<" ";
  temp =temp->next;
}
return 0;
}