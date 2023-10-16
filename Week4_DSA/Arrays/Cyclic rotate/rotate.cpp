
// Cyclically rotate an array by one

void rotate(int arr[], int n)
{
    
      int num = arr[n-1];
    for(int i = n-2; i>=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0] = num;
}