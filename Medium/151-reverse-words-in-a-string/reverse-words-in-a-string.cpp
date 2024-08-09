class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        vector<string>ans;
        
        for(auto c : s)
        {
            if(c != ' ')
            {
                temp+=c;
            }
            else if(temp!="")
            {
                ans.push_back(temp);
                temp = "";
            }
        }
        if(temp!="")
        ans.push_back(temp);

        reverse(ans.begin(),ans.end());

        string res = "";
        for (int i=0;i<ans.size() ;i++) {
            res += ans[i];
            
            if (i>=0 && i < ans.size()-1) {
                res += " ";
            }
        }
        return res;
    }
};