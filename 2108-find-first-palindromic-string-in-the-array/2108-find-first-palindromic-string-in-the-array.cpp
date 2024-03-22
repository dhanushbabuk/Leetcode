class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(string &word:words)
        {
            string temp = word;
            reverse(begin(temp),end(temp));
            if(temp==word)
            return word; 
        }
        return "";
    }
};