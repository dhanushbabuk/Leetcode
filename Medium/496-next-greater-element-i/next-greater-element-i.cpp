class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int, int> greaterElementMap;  
        stack<int> st;
      
        for (int i = n - 1; i >= 0; i--) {
           
            while (!st.empty() && st.top() <= nums2[i])
                st.pop();
            
           
            if (st.empty()) {
                greaterElementMap[nums2[i]] = -1;
            } else {
                greaterElementMap[nums2[i]] = st.top();
            }
            
            
            st.push(nums2[i]);
        }
        
       
        vector<int> result;
        for (int num : nums1) {
            result.push_back(greaterElementMap[num]);
        }

        return result;
    }
};
