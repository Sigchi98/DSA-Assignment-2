class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n = nums.size();
        int minVal = nums[0];
        int maxVal = nums[0];
    
        // Find the minimum and maximum values in the array
        for (int i = 0; i < n; i++) {
            minVal = std::min(minVal, nums[i]);
            maxVal = std::max(maxVal, nums[i]);
        }
    
        // Check if it's possible to obtain a smaller score
        if (maxVal - k <= minVal + k) {
            return 0;
        }
    
        // Calculate the minimum score
        return maxVal - k - (minVal + k);
    }
};
