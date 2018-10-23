class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int sz=cost.size();
        if(sz==1)
            return cost[0];
        else if(sz==2)
            return min(cost[0],cost[1]);
        vector<int>dp(sz+1);
        dp[0]=cost[0]; //init of dp
        dp[1]=cost[1];
        for(int i=2;i<sz;i++)
        {
            dp[i]=cost[i]+min(dp[i-2],dp[i-1]);
        }
        
        return min(dp[sz-2],dp[sz-1]);
    }
};
