class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                increasing = false;
            }
            if (nums[i] > nums[i - 1]) {
                decreasing = false;
            }
            if (!increasing && !decreasing) {
                return false;  // Early termination if both conditions are false
    }
};
