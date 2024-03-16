class Solution {
public:


    bool binarysearch(vector<int>&nums,int target)
    {
        int l=0;
        int h=nums.size()-1;

        while(l<=h)
        {
            int mid = l+( h - l) /2;
            if(nums[mid]==target)
            return true;
            else if(nums[mid]>target)
            h=mid-1;
            else
            l=mid+1;
        }
        return false;
    }

    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        // unordered_set<int>st(begin(nums1),end(nums1));

        // for(int &num:nums2)
        // {
        //     if(st.find(num)!=st.end())
        //     return num;
        // }
        // return -1;

        for(int &num:nums1)
        {
            if(binarysearch(nums2,num))
            return num;
        }
        return -1;
    }
};