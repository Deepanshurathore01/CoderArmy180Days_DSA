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

int main()
{
  Node *Head ,*Tail;
  Head = Tail =NULL;

  int arr[] = {2,4,6,8,10};
// Insert the node at the end 

for(int i=0;i<5;i++)
{
// linked list is empty
if(Head == NULL)
{
  Head =new Node(arr[i]);
  Tail =Head;
}
// if linked list exists
else{
  Tail->next =new Node(arr[i]);
  Tail = Tail->next;
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