class Solution {
public:
    bool check(vector<int>& nums) {
        int n =nums.size();
        if(n==1)return 1;
        if(nums.size()==1)return 1;
        int count=0,i;
        for( i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                count++;
            }
            
        }
        if(nums[n-1]>nums[0])count++;
        return count<=1;
        
    }
};