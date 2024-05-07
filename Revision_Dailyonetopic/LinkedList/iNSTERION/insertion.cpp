#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(int val){
  data =val;
  next =NULL;
}
};

Node Cll(Node head,int val)
{
  if(head == NULL)
  head =new Node(val);

else{
  Node*temp ;
  temp =new Node(val);
  temp->next =head;
  head =temp;
} 
}

int main()
{
  Node * head =NULL;
  Cll(head,23);

  Node*temp =head;
  while(temp)
  {
    cout<<temp->data<<" ";
    temp =temp->next;
  }


}