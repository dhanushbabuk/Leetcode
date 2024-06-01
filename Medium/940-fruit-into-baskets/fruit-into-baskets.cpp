class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxlen = 0;
        int l = 0, r = 0;

        map<int,int>mpp;

        while(r < fruits.size())
        {
            mpp[fruits[r]]++;

            if(mpp.size() > 2)
            {   
                mpp[fruits[l]]--;

                if(mpp[fruits[l]] == 0)
                mpp.erase(fruits[l]);

                l++;
            }

            if(mpp.size() <= 2)
            {
                int len = r - l + 1;
                maxlen = max(maxlen,len);
            }
            r++;
        }
      
        return maxlen;
    }
};