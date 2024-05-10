class Solution {
private:
  void subset(vector<int>& nums, vector<int> output, vector<vector<int>>& ans) {
       
        if (nums.empty()) {
            ans.push_back(output);
            return;
        }

        vector<int> op1 = output;
        vector<int> op2 = output;

        op2.push_back(nums[0]);
        vector<int> nums1 = nums; // Create a copy of nums for the recursive call
        nums1.erase(nums1.begin());
        subset(nums1, op1, ans);
        subset(nums1, op2, ans);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        subset(nums, output, ans);
        return ans;
    }
};