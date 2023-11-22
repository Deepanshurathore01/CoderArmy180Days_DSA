
// brute force approch 
// tc : o(nm) , sc : o(1)
int strStr(string haystack, string needle) {
    int n = haystack.size(), m = needle.size();
    if (m == 0) return 0; // If needle is an empty string, return 0

    for (int i = 0; i <= n - m; i++) {
        int first = i, second = 0;
        while (second < m && haystack[first] == needle[second]) {
            first++;
            second++;
        }
        if (second == m) return i; // Found the substring, return the starting index
    }
    return -1; // Substring not found
}


// optimized solution using KMP algorithm
// tc : o(n+m)
// sc : o(m)

 void lpsFind(vector<int>& lps, string s) {
        int pre = 0, suf = 1;
        while (suf < s.size()) {
            if (s[pre] == s[suf]) {
                lps[suf] = pre + 1;
                pre++, suf++;
            } else {
                if (pre == 0) {
                    lps[suf] = 0;
                    suf++;
                } else {
                    pre = lps[pre - 1];
                }
            }
        }
    }

    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0; // If needle is an empty string, return 0
        
        vector<int> lps(needle.size(), 0);
        lpsFind(lps, needle);
        
        int first = 0, second = 0;
        while (second < needle.size() && first < haystack.size()) {
            if (needle[second] == haystack[first]) {
                second++, first++;
            } else {
                if (second == 0) {
                    first++;
                } else {
                    second = lps[second - 1];
                }
            }
        }
        
        if (second == needle.size()) {
            return first - second;
        }
        return -1;
    }