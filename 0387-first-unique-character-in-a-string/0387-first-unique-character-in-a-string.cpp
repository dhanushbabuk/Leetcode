class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>a(26,0);

        for(char &ch:s)
        {
            a[ch-'a']++;
        }

        for(int i=0;i<s.length();i++)
        {   char ch = s[i];
            if(a[ch-'a']==1)
            return i;
        }
        return -1;
    }
};