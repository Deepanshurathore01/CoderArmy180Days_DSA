#include<iostream>
#include<vector>
using namespace std;

class node{
  public :
  int data;
  node* left , *right;

  node(int value)
  {
    data =value;
    left = right =NULL;
  }

};

void create_tree(node* root0, vector<int> &vec){
        queue<node*>q;
        q.push(root0);
        
        int i=1;
        while(!q.empty() && i<vec.size())
        {
            node* temp =q.front();
            node* left =newNode(vec[i++]);
            node* right =newNode(vec[i++]);
            temp->left =left;
            temp->right =right;
            
            q.push(left);
            q.push(right);
            q.pop();
        }
    }

    int main()
    {
      node* root;
      vector<int> v = {1,2,3,4,5,6,7};
      
      create_tree(root,v);

    }