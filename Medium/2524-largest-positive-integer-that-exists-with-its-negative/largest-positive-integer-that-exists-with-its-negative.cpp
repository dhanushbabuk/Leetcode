class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int max = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j >= 0; j--) {
                int temp = nums[j];
                if (nums[i] == -temp ) {
                    if (max < temp)
                        max = temp;
                }
            }
        }
        if (max != INT_MIN)
            return max;

        return -1;
    }
};