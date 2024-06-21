class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1)
          return intervals;

       sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) {
           return a[0] < b[0]; 
        });

        vector<vector<int>>temp;
        int i = 0;
        for (i ;i < intervals.size()-1; i++) {
            if (intervals[i][1] >= intervals[i+1][0]) {
                intervals[i+1][0] = intervals[i][0];
                intervals[i+1][1] = max(intervals[i][1], intervals[i+1][1]);
            }
             else {
                temp.push_back(intervals[i]);
            }
        }
        temp.push_back(intervals[i]);
        return temp;
    }
};