#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node*left ;
  Node*right;

  Node(int data)
  {
    this->data =data;
    left=NULL;
    right =NULL;
  }
};

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

int find(int *In,int target,int start,int end)
{
  for(int i=start;i<end;i++)
  {
    if(In[i] == target)
    return i;
  }
  return -1;
}

Node* Tree(int *In ,int * Pre ,int InStart ,int InEnd,int index)
{
  if(InStart > InEnd)
  return NULL;

Node*root =new Node(Pre[index]);
int pos =find(In,Pre[index],InStart,InEnd);

root->left =Tree(In,Pre,InStart,pos-1,index+1);
root->right =Tree(In,Pre,pos+1,InEnd,index+(pos-InStart)+1);

return root;
}

int main()
{
int In[] ={4,2,5,1,3};
int Pre[]={1,2,4,5,3};

Node *root =Tree(In,Pre,0,4,0);
preOrder(root);



}