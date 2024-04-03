class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<bool>v(256,0);

       int left = 0,right = 0,len =0;
        while(right <s.size())
        {
            while(v[s[right]])
            {
                v[s[left]]=0;
                left++;
            }
            v[s[right]]=1;
            len = max(len,right - left +1);
            right++;
        }   
        return len;
    }
};