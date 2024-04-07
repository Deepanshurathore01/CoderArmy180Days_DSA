#include<iostream>
using namespace std;

class Node{
  public :

  int data;
  Node *left, *right;

  Node(int value)
  {
    data =value;
    left =right =NULL;
  } 
};

Node* insert(Node* root,int target)
{
  // base case 
  if(!root)
  {
    Node* temp =new Node(target);
    return temp;
  }

  if(target < root->data)
  root->left =insert(root->left,target);
  else
  root->right =insert(root->right,target);

 return root;
}

void inorder(Node*root)
{
  if(!root)
  return;

// left side
inorder(root->left);
// data
cout<<root->data<<" ";
// right side
inorder(root->right);
}

// search function
bool search(Node*root ,int target)
{
  if(!root)
  return 0;

  if(root->data == target)
  return 1;

  if(root->data >target)
   return search(root->left,target);
  else
  return search(root->right,target);
}

int main()
{
  int arr[] ={6,3,17,5,11,18,2,1,20,14};
  Node*root =NULL;

  for(int i=0;i<10;i++)
  {
    root =insert(root,arr[i]);
  }

    cout<<search(root,13)<<endl;
  // Traverse
  // inorder(root);
}