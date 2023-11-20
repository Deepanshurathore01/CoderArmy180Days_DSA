#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSubString(string str) {
    vector<int> count(256, 0);
    int first = 0, sec = 0, len = str.size(), diff = 0;
    
    while (first < str.size()) {
        if (count[str[first]] == 0)
            diff++;
        
        count[str[first]]++;
        first++;
    }
    
    for (int i = 0; i < 256; i++)
        count[i] = 0;
    
    first = 0;
    sec = 0;
    int minLen = len; // Initialize minimum length with the length of the string
    
    while (sec < str.size()) {
        while (diff > 0 && sec < str.size()) {
            if (count[str[sec]] == 0)
                diff--;
            
            count[str[sec]]++;
            sec++;
        }
        
        if (diff == 0) {
            minLen = min(minLen, sec - first);
            
            while (diff == 0) {
                minLen = min(minLen, sec - first);
                count[str[first]]--;
                
                if (count[str[first]] == 0)
                    diff++;
                
                first++;
            }
        }
    }
    
    return minLen;
}

int main() {
    string input = "aabbbcbbac";
    int result = findSubString(input);
    cout << "Length of the smallest substring with all distinct characters: " << result << endl;
    return 0;
}
