class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen = 0 , l =0, r = 0, maxfre = 0;
    map<int,int>mpp;

        while(r < s.size())
        {
            mpp[s[r]-'a']++;
        maxfre = max(maxfre,mpp[s[r]-'a']);

            if(r-l+1 - maxfre> k)
            {
                mpp[s[l]-'a']--;

                l++;
            }

            if(r-l+1 - maxfre <= k)
            {
                maxlen =max(maxlen,r-l+1);
            }
            r++;

        }

        return maxlen;
        
    }
};