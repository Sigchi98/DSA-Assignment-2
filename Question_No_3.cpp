class Solution {
public:
    int findLHS(vector<int>& nums) {
        int maxLength = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int countPlus1 = 0;
            int countMinus1 = 0;

            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i])
                    countPlus1++;
                else if (nums[j] == nums[i] - 1)
                    countMinus1++;
        }

        if (countPlus1 > 0 && countMinus1 > 0)
            maxLength = max(maxLength, countPlus1 + countMinus1);
    }

    return maxLength;
    }
};
