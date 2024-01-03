class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     unordered_map<int,int>mp,mp2;
 for (auto& it:arr){ mp[it]++; }
 for (auto& i:mp) {
   mp2[i.second]++;
     if (mp2[i.second]==2) return false;
    }
    return true;
    }
};