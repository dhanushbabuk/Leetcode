class Solution {
    
public:
    string add(string num1,string num2)
     {
            int index1,index2;
            index1=num1.size()-1;
            index2=num2.size()-1;

        
       
        int sum=0;
        int carry=0;
        string ans="";

        while(index2 >=0)
        {
            sum=num1[index1]-'0' + num2[index2]-'0' + carry;

            carry = sum/10;
            char c = '0'+ sum %10; //converrting to string;

            ans+=c;
            index1--;
            index2--;

        }
           while(index1 >=0)
        {
            sum=num1[index1]-'0'  + carry;

            carry = sum/10;
            char c = '0'+ sum%10; //converrting to string;

            ans+=c;
            index1--;
            

        }
        // edge case
        // if any carry left;
        if(carry)
        {
            ans+='1';
        }
        reverse(ans.begin(),ans.end());

        return ans;
           
     }





    string addStrings(string num1, string num2) 
    {
        
        if(num1.size() < num2.size())
            return  add(num2,num1);
        else
            return add(num1,num2);

     }
};