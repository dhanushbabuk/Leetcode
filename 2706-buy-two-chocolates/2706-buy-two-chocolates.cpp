class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int smallest = INT_MAX;
        int secsmallest = INT_MAX;
        
        for(int &price:prices)
        {
            if(price <smallest)
            {
                secsmallest = smallest;
                smallest=price;
            }
            else
            {
                secsmallest=min(secsmallest,price);
            }
        }

        if(secsmallest+smallest > money)
        return money;
        
        
        return money - (secsmallest+smallest);
    }
};