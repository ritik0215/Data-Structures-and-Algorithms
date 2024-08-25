class Solution {
public:
    // int solve(vector<int>& nums,int i,vector<int>&dp){
    //     if(i==nums.size()-1) return 1;
    //     if(nums[i]==0) return INT_MAX;
    //     if(dp[i]!=-1) return dp[i];
    //     int count=0,minCount=INT_MAX;
        
    //     for(int j=1;j<=nums[i];j++){
    //         count =solve(nums,i+j,dp);
    //         if(count!=INT_MAX)
    //         minCount=min(count+1,minCount);
    //     }
    //     dp[i]=minCount;
        
    //     return dp[i];
    // }
    int solveTab(vector<int>& nums){
        int n=nums.size();
        vector<int> dp(n,INT_MAX);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int minCount=INT_MAX;
            for(int j=1;j<=nums[i]&&i+j<n;j++){
                
                int count =dp[i+j];
                if(count!=INT_MAX)
                minCount=min(count+1,minCount);
                
            }
              dp[i]=minCount;
        }
       return dp[0];
    }
    int jump(vector<int>& nums) {
         if (nums.size() < 2) {
            return 0;
         }
        //  vector<int> dp(nums.size(),-1);
        return solveTab(nums);
   
        
    }
};