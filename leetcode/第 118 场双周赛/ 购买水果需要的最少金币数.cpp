//
// Created by 71989 on 2023/11/27.
//
class Solution {
public:
    int minimumCoins(vector<int>& prices) {
        int n =prices.size();
        vector<int> dp(n + 1, INT_MAX-10);
        dp[0]=0;
        for(int i=1;i<=prices.size();++i){
            for(int j=1;j<i+1;++j){
                if(j+prices[j-1]>=i){
                    dp[i]=min(dp[i],dp[j-1]+prices[j-1]);
                }
            }
        }
        return dp[n];
    }
};