#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == nullptr || root == p || root == q) {
        return root;
    }

    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);

    if (left != nullptr && right != nullptr) {
        return root;
    }

    return left != nullptr ? left : right;
}

int main() {
    // Example tree:
    //      3
    //     / \
    //    5   1
    //   / \ / \
    //  6  2 0  8
    //    / \
    //   7   4
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    root->left->left->right = new TreeNode(2);


    TreeNode* p = root->left; // Node 5
    TreeNode* q = root->left->right // Node 1

    TreeNode* lca = lowestCommonAncestor(root, p, q);

    if (lca != nullptr) {
        std::cout << "Lowest Common Ancestor: " << lca->val << std::endl;
    } else {
        std::cout << "Lowest Common Ancestor not found." << std::endl;
    }

    // Cleanup the allocated memory (in a real program, consider using smart pointers)
    delete root->right->right;
    delete root->right->left;
    delete root->right;
    delete root->left->right->right;
    delete root->left->right->left;
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root;

    return 0;
}
