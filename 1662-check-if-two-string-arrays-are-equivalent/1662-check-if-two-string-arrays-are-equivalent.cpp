class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
      string str,ans;
    for (int i = 0; i < word1.size(); ++i) {
        str+=word1[i];
    }
    for (int i = 0; i < word2.size(); ++i) {
        ans+=word2[i];
    }
    if (str==ans)
        return true;
    return false;
   }
};