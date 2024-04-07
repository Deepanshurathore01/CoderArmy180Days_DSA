 void BST(int arr[],int &index,int lower,int upper,int N)
  {
      if(index == N || arr[index] < lower || arr[index] >upper)
      return;
      
      
      int value =arr[index++];
    //   left side 
    BST(arr,index,lower,value,N);
    // right side
    BST(arr,index,value,upper,N);
  }
    int canRepresentBST(int arr[], int N) {
        // code here
        int index =0;
        BST(arr,index,INT_MIN,INT_MAX,N);
        
        return index == N;
    }