class Solution {
public:
    int numberOfSubstrings(string s) {
        int maxlen = 0 , l = 0 , r =0, cnt =0;
         vector<int>hash(3,0);
        int n=s.size();

         while(r < s.size())
        {
            hash[s[r]-'a']++;

            while( hash[0] >0 && hash[1] >0 && hash[2] > 0)
            {
                hash[s[l]-'a']--;
                cnt = cnt + n - r;

                l++;
            }

            r++;



        }
        return cnt;
     
    }
};