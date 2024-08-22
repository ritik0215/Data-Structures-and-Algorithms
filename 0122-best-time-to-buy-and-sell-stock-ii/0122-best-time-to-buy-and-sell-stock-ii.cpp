class Solution {
public:
    // int solve(vector<int>& prices,int i,int buy,vector<vector<int>>&dp){
    //   if(i==prices.size()){
    //     return 0;
    //   }
    //   int profit=0;
    //     if(buy==0){
    //     profit=max(0+solve(prices,i+1,0,dp),-prices[i]+solve(prices,i+1,1,dp));
    //     }
    //     if(buy==1){
    //     profit= max(0+solve(prices,i+1,1,dp),prices[i]+solve(prices,i+1,0,dp));
    //     }
    //     dp[i][buy]= profit;
       
    //     return dp[i][buy];
        
       
    // }
    int solveTab(vector<int>&prices){
        int n=prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,0));
        int profit;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<2;j++){
                
                if(j==0){
                   profit=max(0+dp[i+1][0],-prices[i]+dp[i+1][1]);
                }
                if(j==1){
                   profit= max(0+dp[i+1][1],prices[i]+dp[i+1][0]);
                }
                dp[i][j]= profit;
            }            
        }
        return dp[0][0];
    }
    int maxProfit(vector<int>& prices) {
        // int n=prices.size();
        // vector<vector<int>> dp(n,vector<int>(2,-1));
       // return solveTab(prices);
       int maxProfit = 0;
        int len = prices.size();

        for (int i = 1; i < len; i++) {
            
            if (prices[i] > prices[i - 1]) {
                maxProfit += prices[i] - prices[i - 1];
            }
        }
        
        return maxProfit;
       
    }
};