class Solution {
public:
    int singleNumber(vector<int>& nums) {
  int x;
  map<int,int>mp;
  for (auto& it:nums) mp[it]++;
  for (auto& t:mp){
      if (t.second==1)
          x=t.first;
  }
    return x;
 }
};