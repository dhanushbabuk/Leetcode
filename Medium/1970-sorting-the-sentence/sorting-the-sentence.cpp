class Solution {
public:
    string sortSentence(string s) {
        
        vector<string>ans(10);

        string temp = "";
        int i = 0;
        int count=0;
       
        while(i < s.size() || temp.size()!=0)
        {
            if(s[i]==' '|| i==s.size())
            {
                int pos = temp[temp.size()-1] - '0';
                    temp.pop_back();
                    ans[pos]=temp;
                    temp.clear();
                    count++;
            }   
            else
             {
                   temp+=s[i];
             }
               
                i++;
        }

                //  int pos = temp[temp.size()-1] - '0';
                //     temp.pop_back();
                //     ans[pos]=temp;
                //     temp.clear();
                //     count++;
                    
              for(int i=1;i<=count;i++)
              {
                temp+=ans[i];
                temp+=' ';
              }
        
                 temp.pop_back();

             return temp;

    }
};