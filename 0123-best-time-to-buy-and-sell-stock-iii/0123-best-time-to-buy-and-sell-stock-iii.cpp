class Solution {
public:
    //  int solve(vector<int>& prices,int i,int buy,int count,vector<vector<vector<int>>>&dp){
    //     if(i==prices.size()){
    //         return 0;
    //     }
    //     if(count==0){
    //         return 0;
    //     }
    //     if(dp[i][buy][count]!=-1)return dp[i][buy][count];
    //      int profit=0;
    //         if(buy==0 ){
    //         profit=max(0+solve(prices,i+1,0,count,dp),-prices[i]+solve(prices,i+1,1,count,dp));
    //         }
    //         if(buy==1 ){
    //         profit=max(0+solve(prices,i+1,1,count,dp),prices[i]+solve(prices,i+1,0,count-1,dp));
    //         }
    //         dp[i][buy][count]= profit;
        
    //         return dp[i][buy][count];
    // }
    int solveTab(vector<int>& prices){
        int n=prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        int profit;
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<2;buy++){
                for(int count=2;count>=1;count--){
                    if(buy==0 ){
                    profit=max(0+dp[i+1][0][count],-prices[i]+dp[i+1][1][count]);
                    }
                    if(buy==1 ){
                    profit=max(0+dp[i+1][1][count],prices[i]+dp[i+1][0][count-1]);
                    }
                    dp[i][buy][count]= profit;
        
                }
            }
        }
        return  dp[0][0][2];
    }
    int maxProfit(vector<int>& prices) {
        // int n=prices.size();
        // vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
        // return solve(prices,0,0,2,dp);
        return solveTab(prices);
    }
};