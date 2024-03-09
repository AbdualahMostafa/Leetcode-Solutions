class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxFreq=0,ans=0;
        vector<int>v(101,0);
        for (int i=0;i<nums.size();++i){
            v[nums[i]]++;
        }
        for(int i=1;i<101;i++)
            maxFreq=max(maxFreq,v[i]);
        for(int i=1;i<101;i++)
            if(v[i]==maxFreq)ans+=v[i];
                return ans;  
    }
};