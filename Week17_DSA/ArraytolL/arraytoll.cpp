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
int arr[] = {1,2};

//create it using recursion
head =createDll(arr,0,2,NULL);

// for(int i=0;i<5;i++)
// {
//   // linked list  doesn't exist's
//   if(head == NULL)
//   {
//     head =new Node(arr[i]);
//     tail =head;
//   }
//   // linked list exixt's
//   else{
//     Node* temp =new Node(arr[i]);
//     tail->next =temp;
//     temp->prev =tail;
//     tail =temp;
//   }

// }

// Insert at any given posititon
int pos =1;
//Edge Cases are 
// insert at start
if(pos == 0)
{
  // Linkedlist doesn't exists
   if(head==NULL)
   {
    head =new Node(5);
   }
  // Linkedlist does exists
  else{
    Node*temp =new Node(5);
    temp->next =head;
    head->prev =temp;
    head =temp;
  }
}
else{
Node* curr =head;
// go to the node, after which i have to insert
while(--pos)
{
  curr =curr->next;
}
// insert at end
if(curr->next ==NULL)
{
  Node *temp =new Node(5);
  temp->prev =curr;
  curr->next =temp;
}
// insert at middle
else{
  Node*temp =new Node(5);
  temp->next =curr->next;
  temp->prev =curr;
  curr->next =temp;
  temp->next->prev =temp;
}

}


 

  Node * trav =head;
  while(trav)
  {
    cout<<trav->data<<"-> ";
    trav =trav->next;
  }
}