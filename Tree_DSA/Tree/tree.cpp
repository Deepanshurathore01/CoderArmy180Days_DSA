#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
int data;
Node *left,*right;

Node(int val)
{
  data =val;
  left =right =NULL;
}
};

int main()
{
  int x;
  cout<<"Enter the root element ";
  cin>>x;
  int first ,second;

  queue<Node*>q;
  Node* root =new Node(x);
  q.push(root);

  // build the tree 
  while(!q.empty())
  {
    Node* temp =q.front();
    q.pop();
    cout<<"Enter the left child of "<<temp->data<<":";
    cin>>first;
    // left node
    if(first !=-1)
    {
      temp->left =new Node(first);
      q.push(temp->left);
    }

    // right node
    cout<<"Enter the right child of "<<temp->data<<":";
    cin>>second;
    if(second !=-1)
    {
      temp->right =new Node(second);
      q.push(temp->right);
    }
  }
}


/* level order 
void(Node*root, vector<int>&ans)
    {
        if(root == 0)
        return;
        
        queue<Node*>q;
        Node *temp =new Node(root);
        while(!q.empty)
        {
            Node*one =q.front();
            q.pop();
        }
    }
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      vector<int>ans;
      Level(root,ans);
      return ans;
    }*/