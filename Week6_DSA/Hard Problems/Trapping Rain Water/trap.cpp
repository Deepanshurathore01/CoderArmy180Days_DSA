int trap(vector<int>& height) {
       int n =height.size() ,water =0;
       int leftmax =0 , rightmax =0, maxheight =height[0] ,index =0;
       for(int i=1;i<n;i++){
            if(height[i] > maxheight)
            {
                maxheight =height[i];
                index =i;
            }
       }
    //    left part 
       for(int i=0;i<index;i++){
           if(leftmax > height[i]){
               water +=leftmax -height[i];
           }
           else{
               leftmax =height[i];
           }
       }
// right part 
       for(int i=n-1;i>index;i--){
           if(rightmax > height[i]){
               water +=rightmax -height[i];
           }
           else{
               rightmax =height[i];
           }
       }
       return water;
    }

    // using 2 pointer 
    // tc :o(n)

     int trap(vector<int>& height) {
        int l =0 , r=height.size()-1;
        int res =0;
         int leftMax =0 ,rightMax =0;

         while(l<r){
             if(height[l]<=height[r]){
                 if(height[l]>=leftMax) leftMax =height[l];
                 else res+=leftMax -height[l];
                 l++;
             }
             else{
                 if(height[r]>=rightMax) rightMax =height[r];
                 else res+=rightMax -height[r];
                 r--;
             }
         }
         return res;
    }