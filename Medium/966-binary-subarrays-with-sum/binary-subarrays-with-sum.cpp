class Solution {
    public :

  int fun(std::vector<int>& nums, int k) {
        if (k < 0) return 0;

        int l = 0, r = 0, cnt = 0, sum = 0;

        while (r < nums.size()) {
            sum += nums[r] % 2; 

            while (sum > k) { 
                sum -= nums[l] % 2; 
                l++;
            }

            cnt += (r - l + 1); 
            r++; 
        }

        return cnt;
    }

  
     int numSubarraysWithSum(vector<int>&nums, int goal) {
        
        
        return fun(nums,goal)-fun(nums,goal-1);
        
        
    }

};