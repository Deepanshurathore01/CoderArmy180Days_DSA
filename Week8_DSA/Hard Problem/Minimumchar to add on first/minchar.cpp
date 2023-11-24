 int minChar(string str){
        //Write your code here
        string rev =str;
        reverse(rev.begin(),rev.end());
        int size = str.size();
        str +='$';
        str +=rev;
        
        int n =str.size();
        vector<int>lps (n,0);
        
        int pre =0 , suf =1;
        while(suf < str.size())
        {
            // matched
            if(str[pre] == str[suf]){
                lps[suf] = pre+1;
                pre++ , suf++;
            }
            
            // not matched 
            else{
                if(pre == 0)
                  suf++;
                else
                {
                    pre =lps[pre-1];
                }
            }
        }
        
        return size - lps[n-1];
    }