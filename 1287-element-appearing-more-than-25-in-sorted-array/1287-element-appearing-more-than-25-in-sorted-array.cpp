class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       int x=(arr.size()*25)/100;
        map<int,int>mp;
        for (auto& it:arr)
            mp[it]++;
        for(int i=0;i<arr.size();++i)
        {
            if (mp[arr[i]]>x)
                return arr[i];
        }
        return -1;
    }
};