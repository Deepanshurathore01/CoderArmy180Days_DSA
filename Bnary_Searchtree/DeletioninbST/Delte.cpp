Node *deleteNode(Node *root, int target) {
    if(!root)
    return NULL;
    
    if(root->data > target)
    {
    root->left=deleteNode(root->left,target);
     return root;   
    }
    
    else if(root->data < target)
    {
    root->right =deleteNode(root->right,target);
     return root;   
    }
    
    else
    {
        // leaf Node delete
        if(!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        // one child exist
        else if(!root->right)
        {
            // left child exist
            Node*temp =root->left;
            delete root;
            return temp;
        }
        else if(!root->left)
        {
            // right child exist
            Node*temp =root->right;
            delete root;
            return temp;
        }
        // dono child exist
        else{
            // find the greastes element from the left 
            Node *child =root->left;
            Node *parent=root;
            
            // Right most Node
            while(child->right)
            {
                parent =child;
                child=child->right;
            }
            
            if(root !=parent)
            {
                parent->right=child->left;
                child->left=root->left;
                child->right=root->right;
                delete root;
                return child;
            }
            else{
                child->right= root->right;
                delete root;
                return child;
            }
            
        }
    }
        
    
    
}