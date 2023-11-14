class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size(),mult = 1;
        vector<int>v(n);
    for(int i = 0; i<n; i++){
        v[i] = mult;
        mult*=nums[i];
    }
    mult = 1;
    for(int j = n-1; j>=0; j--){
        v[j]*=mult;
        mult*=nums[j];
    }
    return v;
    }
};