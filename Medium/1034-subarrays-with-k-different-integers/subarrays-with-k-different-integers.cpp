class Solution {
public:

    int fun(vector<int>& nums, int k) {
        if (k < 0) return 0;

        int l = 0, r = 0, cnt = 0;

        map<int,int>mpp;

        while (r < nums.size()) {
            mpp[nums[r]]++; 

            while (mpp.size() > k) { 
                mpp[nums[l]]--;

                if(mpp[nums[l]]==0)
                mpp.erase(nums[l]); 
                
                l++;
            }

            cnt += (r - l + 1); 
            r++; 
        }

        return cnt;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
      return fun(nums, k) - fun(nums, k - 1);
    }
};