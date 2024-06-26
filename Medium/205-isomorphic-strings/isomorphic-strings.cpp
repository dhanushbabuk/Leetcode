class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;

        for (int i = 0; i < s.size(); ++i) {
           
            // Check mapping from s to t
            if (s_to_t.find( s[i]) == s_to_t.end()) {
                // not found
                s_to_t[ s[i]] = t[i];
            } else {
                if (s_to_t[ s[i]] != t[i]) {
                    return false; 
                }
            }

            // Check mapping from t to s
            if (t_to_s.find(t[i]) == t_to_s.end()) {
                // not found
                t_to_s[t[i]] =  s[i];
            } else {
                if (t_to_s[t[i]] !=  s[i]) {
                    return false; 
                }
            }
        }

        return true;
    }
};
