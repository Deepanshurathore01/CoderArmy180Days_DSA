#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sumOfLeafNodes(TreeNode* root) {
    // Edge case: If the tree is empty
    if (root == NULL) {
        return 0;
    }
    
    // Initialize sum
    int sum = 0;
    
    // Base case: if root is a leaf node
    if (root->left == NULL && root->right == NULL) {
        sum += root->val;
    }
    
    // Recursive case: traverse left and right subtrees
    sum += sumOfLeafNodes(root->left);
    sum += sumOfLeafNodes(root->right);
    
    return sum;
}

int main() {
    // Example usage
    TreeNode* root = new TreeNode(67);
    root->left = new TreeNode(34);
    root->right = new TreeNode(82);
    root->left->left = new TreeNode(12);
    root->left->right = new TreeNode(45);
    root->right->right = new TreeNode(78);

    cout << "Sum of leaf nodes: " << sumOfLeafNodes(root) << endl;

    return 0;
}
