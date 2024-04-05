class Solution {
public:
    string makeGood(string s) {
        string res = "";
        for (char &ch : s) {
            if (res.empty() || abs(res.back() - ch) != 32) {
                res.push_back(ch);
            } else {
                res.pop_back();
            }
        }
        return res;
    }
};
