#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

bool checkPangram(string &sentence) {
    vector<bool> ans(26, false);

    for (int i = 0; i < sentence.size(); i++) {
        if (isalpha(sentence[i])) {
            int index = tolower(sentence[i]) - 'a';
            ans[index] = true;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (!ans[i])
            return false;
    }
    return true;
}

int main() {
    string sentence = "the quick brown fox jumps over the lazy dog";
    bool pangram = checkPangram(sentence);
    if (pangram) {
        cout << "String is a pangram";
    } else {
        cout << "String is not a pangram";
    }
    return 0;
}
