#include<iostream>
 
//  tc : O(n) 
// sc :O(1)
 int lengthOfLongestSubstring(string s) {
        vector<bool> count(256,0);
        int first=0 ,second =0 , len =0;

        while(second < s.size()){
            // repeating char
            while(count[s[second]])
            {
                count[s[first]] =0;
                first++;
            }

            count[s[second]] =1;
            len = max(len,second - first +1);
            second++;
        }

        return len;
    }