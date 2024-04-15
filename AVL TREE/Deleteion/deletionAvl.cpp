int getHeight(Node* root) {
        if(!root)
            return 0;
        return root->height;
    }

    int getBalance(Node* root) {
        return getHeight(root->left) - getHeight(root->right);
    }

    Node* rightRotation(Node* root) {
        Node* child = root->left;
        Node* childRight = child->right;

        child->right = root;
        root->left = childRight;

        // Update the height
        root->height = 1 + std::max(getHeight(root->left), getHeight(root->right));
        child->height = 1 + std::max(getHeight(child->left), getHeight(child->right));

        return child;
    }

    Node* leftRotation(Node* root) {
        Node* child = root->right;
        Node* childLeft = child->left;

        child->left = root;
        root->right = childLeft;

        // Update the height
        root->height = 1 + std::max(getHeight(root->left), getHeight(root->right));
        child->height = 1 + std::max(getHeight(child->left), getHeight(child->right));

        return child;
    }


Node* deleteNode(Node* root, int key)
{
    if(!root)
    return NULL;
    
    if(key < root->data)
    {
        root->left =deleteNode(root->left,key);
    }
    else if(key > root->data)
    {
        root->right =deleteNode(root->right,key);
    }
    else{
        // Leaf Node
        if(!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        // lonly one child exist 
        else if(root->left && !root->right)
        {
            Node* temp =root->left;
            delete root;
            return temp;
        }
         else if(!root->left && root->right)
        {
            Node* temp =root->right;
            delete root;
            return temp;
        }
        // both child exist 
        else{
            // right side smallest element
            Node* curr =root->right;
            while(curr->left)
            {
                curr =curr->left;
            }
            root->data =curr->data;
            root->right = deleteNode(root->right,root->data);
        }
    }
    
    // update tthe height 
    root->height = 1+max(getHeight(root->left),getHeight(root->right));
    
    // check the balancing 
    int balance = getBalance(root);
    // left side 
    if(balance >1)
    {
        // ll 
        if(getBalance(root->left) >=0)
        return rightRotation(root);
        // Lr
        else{
            root->left =leftRotation(root->left);
            return rightRotation(root);
        }
    }
    
    // right side 
    else if(balance <-1)
    {
        // rr
        if(getBalance(root->right) <=0)
        return leftRotation(root);
        // rl
        else{
        root->right = rightRotation(root->right);
        return leftRotation(root);
        }
    }
    else 
    return root;
}