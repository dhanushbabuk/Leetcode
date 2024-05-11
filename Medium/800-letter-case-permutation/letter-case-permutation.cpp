class Solution {
public:

    void generate(string ip,string op,vector<string>&v)
    {
        if(ip.empty())
        {
            v.push_back(op);
            return;
        }
    
    
      if(isalpha(ip[0]))
      {
        string op1 =op;
        string op2 =op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        
        ip.erase(ip.begin());
        generate(ip,op1,v);
        generate(ip,op2,v);
        
      }
      else
      {
        string op1 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin());
        generate(ip,op1,v);
      }
         
                
    }

    vector<string> letterCasePermutation(string s) {
        
        string output;
         vector<string>v;

        generate(s,output,v);
        return v;
    }
};