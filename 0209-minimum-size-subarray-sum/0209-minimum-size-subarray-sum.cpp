class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,sum=0,len=INT_MAX,i=0,n=nums.size();
        while(i<n){
            sum+=nums[i];
            while(sum>=target){
                len=min(len,i-l+1);
                sum-=nums[l];
                l++;
            }
           
            i++;
            
            
           

        }
        return len==INT_MAX?0:len;
    }
};