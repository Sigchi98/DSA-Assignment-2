class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();

        // Sort the array in ascending order
        sort(nums.begin(), nums.end());
    
        // Calculate the maximum product
        int product1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int product2 = nums[0] * nums[1] * nums[n - 1];
    
        // Return the maximum of the two products
        return max(product1, product2);
    }
};
