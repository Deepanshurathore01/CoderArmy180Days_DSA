 #include<iostream>
 #include<string>
 #include<vector>
 using namespace std;
 
 vector<int> factorial(int N){
        // code here
        vector<int> ans(1,1);
        
        while(N > 1){
            int carry =0 , res , size =ans.size();
            
            for(int i=0;i<size;i++){
                res = ans[i]*N + carry;
                carry = res/10;
                ans[i] =res%10;
            }
            
            while(carry){
                ans.push_back(carry%10);
                carry /=10;
            }
            N--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }