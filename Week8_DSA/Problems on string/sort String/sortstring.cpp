#include<iostream>
#include<vector>
using namespace std;

string sort(string s){
    //complete the function here
    vector<int>alpha (26,0);
    for(int i=0;i<s.size();i++){
        int index = s[i] -'a';
        alpha[index]++;
    }
    
    string ans ;
    for(int i=0;i<26;i++){
        char c='a' +i;
        while(alpha[i]){
            ans += c;
            alpha[i]--;
        }
    }
    return ans;
}