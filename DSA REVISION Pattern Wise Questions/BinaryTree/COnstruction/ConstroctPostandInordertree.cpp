// Q2 Construct Binary Tree from Inorder and Postorder Traversal

class Solution {
public:
int Find(const vector<int>& inorder, int target, int start, int end) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == target)
            return i;
    }
    return -1;
}

TreeNode* Tree(const vector<int>& postorder, const vector<int>& inorder, int start, int end, int& index) {
    // Base case: when the start exceeds end, return NULL
    if (start > end) return NULL;

    // The current root is the element at the postorder index
    TreeNode* root = new TreeNode(postorder[index]);
    int pos = Find(inorder, postorder[index], start, end);

    // Decrement postorder index as we move to the next element in postorder
    index--;

    // Recursively build the right subtree first because in postorder, the right child comes before the left child
    root->right = Tree(postorder, inorder, pos + 1, end, index);

    // Then build the left subtree
    root->left = Tree(postorder, inorder, start, pos - 1, index);

    return root;
}

TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    int n = postorder.size();
    int postIndex = n - 1;  // The last index of postorder will be the root
    return Tree(postorder, inorder, 0, n - 1, postIndex); 
}

};