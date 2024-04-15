class Box
{
    public :
    bool BST;
    int size;
    int min , max;
    
    Box(int data){
        BST =1;
        size =1;
        min =data;
        max =data;
    }
};

class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST



Box* find(Node*root,int &total_size)
{
    // leaf node
    if(!root->left && !root->right)
    {
        total_size =max(total_size,1);
        return new Box(root->data);
    }
    
    // only right side exist
    else if(!root->left && root->right)
    {
        Box* head =find(root->right,total_size);
        // BST yes
        if(head->BST && head->min > root->data)
        {
            head->size++;
            head->min=root->data;
            total_size =max(total_size,head->size);
            return head;
        }
        // No
        else{
            head->BST =0;
            return head;
        }
    }
    // only left side exist
    
    else if(root->left && !root->right)
    {
        Box*head =find(root->left,total_size);
        if(head->BST && head->max <root->data)
        {
            head->size++;
            head->max=root->data;
            total_size =max(total_size,head->size);
        }
        else{
            head->BST=0;
            return head;
        }
    }
    
    // both side exist 
    else{
        Box* leftHead =find(root->left,total_size);
        Box* rightHead=find(root->right,total_size);
        
        if(leftHead-> BST && rightHead->BST && leftHead->max < root->data && rightHead->min >root->data)
        {
            Box*head =new Box(root->data);
            head->size +=leftHead->size + rightHead->size;
            head->min =leftHead->min;
            head->max =rightHead->max;
            total_size =max(total_size,head->size);
            return head;
        }
        else{
            leftHead->BST =0;
            return leftHead;
        }
    }
}


    int largestBst(Node *root)
    {
        int total_size =0;
        find(root,total_size);
        return total_size;
    	
    }
};


// 2nd method 

class Box
{
    public :
    bool BST;
    int size;
    int min , max;
    
    Box(){
        BST =1;
        size =1;
        min =INT_MAX;
        max =INT_MIN;
    }
};

class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST



Box* find(Node*root,int &total_size)
{
    // leaf node
    if(!root)
    {
        return new Box();
    }
    
    // if root exists
        Box* leftHead =find(root->left,total_size);
        Box* rightHead=find(root->right,total_size);
        
        if(leftHead-> BST && rightHead->BST && leftHead->max < root->data && rightHead->min >root->data)
        {
            Box*head =new Box();
            head->size = 1+leftHead->size + rightHead->size;
            head->min =min(root->data,leftHead->min);
            head->max =max(root->data,rightHead->max);
            total_size =max(total_size,head->size);
            return head;
        }
        else{
            leftHead->BST =0;
            return leftHead;
        }
}


    int largestBst(Node *root)
    {
        int total_size =0;
        find(root,total_size);
        return total_size;
    	
    }