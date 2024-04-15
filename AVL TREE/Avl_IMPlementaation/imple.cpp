#include<iostream>
using namespace std;

class Node{
public :
int data;
int height;
Node *left,*right;

Node(int val)
{
  data =val;
  height =1;
  left = right =NULL;
}
};

int getHeight(Node*root)
{
  if(!root)
  return 0;

return root->height;
}

int getBalance(Node* root)
{
  return getHeight(root->left)-getHeight(root->right);
}

      //  rightRotation(root);
      Node* rightRotation(Node* root)
      {
        Node* child =root->left;
        Node* childRight =child->right;

        child->right =root;
        root->left =childRight;

        // update the height
        root->height = 1+max(getHeight(root->left),getHeight(root->right));
        child->height = 1+max(getHeight(child->left),getHeight(child->right));

        return child;
      }

      //  leftRotation(root);
      Node* leftRotation(Node* root)
      {
         Node* child=root->right;
         Node* childleft =child->left;

         child->left =root;
         root->right=childleft;

          // update the height
        root->height = 1+max(getHeight(root->left),getHeight(root->right));
        child->height = 1+max(getHeight(child->left),getHeight(child->right));

        return child;
      }

//leftRotation(root->left); 

Node* Insert(Node* root,int key)
{
  // Doesn;t exsist
  if(!root)
  return 0;

// Exists
 if(key < root->data) //left side 
 {
  root->left=Insert(root->left,key);
 }
 else if( key >root->data)
 {
  root->right =Insert(root->right,key);
 }
 else
 {
  return root; //dublicate lelement didi'nt allow 
 }

 root->height = 1+max(getHeight(root->left),getHeight(root->right));

//  balancing chek 
int balance =getBalance(root);

// left left case
if(balance >1 && key <root->left->data)
  return  rightRotation(root);
// right right caase
else if(balance <-1 && root->right->data <key)
   return leftRotation(root);
// left right case
else if(balance >1 && key >root->left->data)
{
   root->left =  leftRotation(root->left); 
     return  rightRotation(root);

}

// right left case 
else if(balance <-1 &&root->left->data > key)
{
   root->right  =  rightRotation(root->right); 
   return  leftRotation(root); 

}
// no unbalancing
else{
return root;
}
}

void inorder(Node* root)
{
  if(!root)
  return ;

 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
}
int main()
{
  Node* root =NULL;
  root =Insert(root,60);
  root =Insert(root,12);
  root =Insert(root,10);
  root =Insert(root,9);
  root =Insert(root,180);
  root =Insert(root,50);
  root =Insert(root,10);
  root =Insert(root,24);
  root =Insert(root,100);

  cout<<"Inorder"<<endl;
  inorder(root);
}