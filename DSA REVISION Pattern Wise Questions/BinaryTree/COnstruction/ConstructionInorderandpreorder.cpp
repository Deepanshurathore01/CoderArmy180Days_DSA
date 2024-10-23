// Q1  Construct Binary Tree from Preorder and Inorder Traversal

class Solution {
public:
int Find( vector<int>& inorder,int target,int start,int end){
    for(int i=start;i<=end;i++)
    {
        if(inorder[i] == target)
        return i;
    }

    return -1;
}
    TreeNode* Tree(vector<int>& preorder, vector<int>& inorder,int start,int end,int index){
        if(start > end) return NULL;
        TreeNode* root =new TreeNode(preorder[index]);
        int pos =Find(inorder,preorder[index],start,end);

        root->left =Tree(preorder,inorder,start,pos-1,index+1);
        root->right=Tree(preorder,inorder,pos+1,end,index+(pos-start+1));

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return Tree(preorder,inorder,0,preorder.size()-1,0);
    }
};
Tc : O(n^2 );
Sc : O(n);