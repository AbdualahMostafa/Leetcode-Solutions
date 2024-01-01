class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int x=INT_MAX,y=INT_MAX;
    for (auto& it:nums){
        if (it<=x)
            x=it;
        else if (it<=y)
            y=it;
        else
            return true;
    }
        return false;
    }
};