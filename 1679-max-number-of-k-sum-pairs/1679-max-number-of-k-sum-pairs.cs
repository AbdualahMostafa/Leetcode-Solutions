public class Solution {
    public int MaxOperations(int[] nums, int k) {
        Array.Sort(nums);
        int cnt=0;
        int i=0;
        int j=nums.Length-1;
        while (i<j){
            if (nums[i]+nums[j]==k){
                cnt++;
                i++;
                j--;
            }
            else if (nums[i]+nums[j]>k){
                j--;
            }
            else {
                i++;
            }
        }
        return cnt;
    }
}