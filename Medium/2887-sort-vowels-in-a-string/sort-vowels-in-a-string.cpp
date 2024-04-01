class Solution {
public:
    string sortVowels(string s) {
        

        vector<int>lower(26,0);
        vector<int>upper(26,0);

        for(int i = 0 ;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                lower[s[i]-'a']++;
                s[i]='#';
            }
        }

         for(int i = 0 ;i<s.size();i++)
        {
            if(s[i]=='A' || s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                upper[s[i]-'A']++;
                s[i]='#';
            }
        }

        string vowel;
// upper
        for(int i=0;i<26;i++)
        {
            char ch = 'A'+ i;
            while(upper[i])
            {
                vowel+=ch;
                upper[i]--;
            }       
             
        }
        // lower
         for(int i=0;i<26;i++)
        {
            char ch = 'a'+i;
            // checking if multiple chara are present or not
            while(lower[i])
            {
                vowel+=ch;
                lower[i]--;
            }       
             
        }


    int j = 0;
        for(int i=0;i<s.size();i++)
        {   
            if(s[i]=='#')
            {
                s[i]=vowel[j];
                j++;
            }

        }
        return s;


    }
};