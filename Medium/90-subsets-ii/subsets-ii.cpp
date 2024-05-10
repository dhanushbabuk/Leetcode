class Solution {
public:
        set<vector<int>> s;
    void generate(vector<int>ip, vector<int>op) {

        if (ip.empty()) {
             sort(op.begin(),op.end());
            s.insert(op);
            return;
        }

        vector<int> op1 = op;
        vector<int> op2 = op;

        op2.push_back(ip[0]);
        ip.erase(ip.begin());

        generate(ip, op2);
        generate(ip, op1);

        return;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<int> op;
         vector<vector<int>> ans;

        generate(nums, op);
        for(auto i :s)
        {
            ans.push_back(i);
        }
        return ans;
    }
};
