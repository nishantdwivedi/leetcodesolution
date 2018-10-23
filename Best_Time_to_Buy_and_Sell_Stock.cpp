class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1)
            return 0;
        int best_buy=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++)
        {   //sell @ i  
            if(prices[i]-best_buy>ans)
                ans=prices[i]-best_buy;
            //buying @ i
            if(prices[i]<best_buy)
                best_buy=prices[i];
        }
         
        
        
        return ans;
    }
};
