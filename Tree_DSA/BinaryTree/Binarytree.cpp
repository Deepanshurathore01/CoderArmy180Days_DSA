#include<iostream>
using namespace std;

class Node{
  public :
  int data;
  Node* left , *right;

  Node(int value)
  {
    data =value;
    left = right =NULL;
  }

};

Node* BinaryTree()
{
  int x;
  cin>>x;
  if(x==-1)
  return NULL;

 Node * temp =new Node(x);
//  left part 
cout<<"Enter the left chil of "<<x<<" : ";
 temp->left =BinaryTree();
//  right part
cout<<"Enter the right child of : "<<x<<" : ";
 temp->right =BinaryTree();

 return temp;
}

void preOrder(Node* root)
{
  if(root == NULL)
  return ;
  
  cout<<root->data<<" ";
  preOrder(root->left);
  preOrder(root->right);
}

void InOrder(Node* root)
{
  if(root == NULL)
  return ;
  
  InOrder(root->left);
  cout<<root->data<<" ";
  InOrder(root->right);
}

void PostOrder(Node* root)
{
  if(root == NULL)
  return ;
  
  PostOrder(root->left);
  PostOrder(root->right);
  cout<<root->data<<" ";
}

int main()
{
cout<<"Enter the root node ";
Node* root;
root =BinaryTree();

cout<<"Pre-Order : ";
preOrder(root);
cout<<endl;
cout<<"InOrder :";
InOrder(root);
cout<<endl;
cout<<"Post-Order :";
PostOrder(root);
cout<<endl;
}