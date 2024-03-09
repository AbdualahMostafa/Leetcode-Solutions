class Solution {
public:
  vector<int> sortedSquares(vector<int>& nums) {
    vector<int> v;
    for (int num : nums) {
      v.push_back(num * num); // Square all elements
    }
    sort(v.begin(), v.end()); // Sort the squared elements
    return v;
  }
};
