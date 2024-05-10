class Solution {
private:
   vector<vector<int>>  ans ; 
    void generate(vector<int>  ip,vector<int> op)
    {
        
        if(ip.size()==0)
        {
            ans.push_back(op);
            return;
        }
        
        vector<int> op1 = op;
        vector<int> op2 = op;

        op2.push_back(ip[0]);         
        ip.erase(ip.begin()+0);          
        
        generate(ip,op2);
        generate(ip,op1);
        
    }
    
public:
    vector<vector<int>>subsets(vector<int>& nums) {
    
         vector<int>op;
         generate(nums,op);

        return ans;  
    }
};

