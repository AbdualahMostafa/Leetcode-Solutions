public class Solution {
    public bool IncreasingTriplet(int[] nums) {
        int x = int.MaxValue;
        int y = int.MaxValue;
        foreach (int it in nums) {
            if (it <= x)
                x = it;
            else if (it <= y)
                y = it;
            else
                return true;
        }
        return false;
    }
}