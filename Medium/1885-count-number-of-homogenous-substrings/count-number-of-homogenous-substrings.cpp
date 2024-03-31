class Solution {
public:
    int countHomogenous(string s) {

        int length = 0;
        int result = 0;
        int mod = 1e9+7;

        for(int i = 0;i<s.length();i++)
        {

                if(i>0 && s[i]==s[i-1])
                    length++;
                else 
                    length=1;

                    result = (result + length) % mod;
        }
     return result;
        
    }
};