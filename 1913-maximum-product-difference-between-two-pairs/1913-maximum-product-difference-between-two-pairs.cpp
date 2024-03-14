class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int largest =INT_MIN;
        int seclargest =INT_MIN;

        int smallest =INT_MAX;
        int secsmallest =INT_MAX;

        for(int &num:nums)
        {
            if(num>largest)
            {
                seclargest=largest;
                largest=num;
            }
            else
            {
                seclargest=max(seclargest,num);
            }
        }
        for(int &num:nums)
        {
            if(num<smallest)
            {
                secsmallest = smallest;
                smallest =num;
            }
            else
            {
                secsmallest = min(secsmallest,num);
            }
        }

        return (largest*seclargest)-(smallest*secsmallest);
    }
};