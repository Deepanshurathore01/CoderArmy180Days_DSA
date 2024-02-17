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

int main()
{
  Node* head =NULL;

  // Insert at start 
  // Linked list does'nt exists
  // if(head==NULL)
  // {
  //   head =new Node(5);
  // } 
  // // Alreaddy exist
  // else{
  //   Node *temp =new Node(5);
  //   temp->next =head;
  //   head->prev =temp;
  //   head =temp;
  // }



  Node * trav =head;
  while(trav)
  {
    cout<<trav->data<<"-> ";
    trav =trav->next;
  }
}