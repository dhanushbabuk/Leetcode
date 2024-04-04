class Solution {
public:
    int maxDepth(string s) {
   
        int i=0;
        int count=0;
        int len=0;

        while(i<s.size())
        {
            if(s[i]=='(')
            {
                count++;
          

            }
            else if(s[i]==')')
            {
                count--;
                
            }
             len = max(len,count);
            i++;
        }  
        return len;
    }
};