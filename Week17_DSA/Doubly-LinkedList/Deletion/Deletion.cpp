#include<iostream>
using namespace std;

class Node
{
public :
int data;
Node* next;
Node* prev;

Node(int val)
{
  data =val;
  next =NULL;
  prev =NULL;
}
};

Node* createDll(int arr[],int index,int size,Node*back)
{
  if(index == size)
  return NULL;

Node*temp =new Node(arr[index]);
temp->prev=back;
temp->next =createDll(arr,index+1,size,temp);
return temp;
}

int main()
{
  Node* head =NULL;
  // Node*tail =NULL;
// create doubluy linked list
int arr[] = {1,2,3,4,5};

//create it using recursion
head =createDll(arr,0,2,NULL);

// Delete at start 
// if(head !=NULL)
// {

//   // if only one node existz 
//   if(head->next == NULL)
//   {
//     delete head;
//     head=NULL;
//   }
//   // If more than 1 node exist
//   else{
//   Node* t =head;
//   head =head->next;
//   delete t;
//   head->prev =NULL;
//   }
// }

// Delete at end 
// if(head !=NULL)
// {
//   // if only 1 node exist 
//   if(head->next == NULL)
//   {
//     delete head;
//     head =NULL;
//   }
//   // more than 1 node exist 
//   else{
//     Node* curr =head;
//     while(curr->next)
//     {
//       curr =curr->next;
//     }
//     curr->prev->next =NULL;
//     delete curr;
//   }
// }

// Delete at given position
int pos =2;
// delete at start 
if(pos ==1)
{
 if(head->next == NULL)
  {
    delete head;
    head=NULL;
  }
  // If more than 1 node exist
  else{
  Node* t =head;
  head =head->next;
  delete t;
  head->prev =NULL;
  }
}
else{
  Node* curr =head;
  while(--pos)
  curr =curr->next;
  // delete at end 
  if(curr->next == NULL)
  {
    curr->prev->next =NULL;
    delete curr;
  }
  // delete at middle
  else{
    curr->prev->next =curr->next;
    curr->next->prev =curr->prev;
    delete curr;
  } 
}


 

  Node * trav =head;
  while(trav)
  {
    cout<<trav->data<<"-> ";
    trav =trav->next;
  }
}