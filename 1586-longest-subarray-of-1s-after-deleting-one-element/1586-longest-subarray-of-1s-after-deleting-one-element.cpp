class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0,zero=0,len=0;
        while(r<nums.size()){
           if(nums[r]==0){
             zero++;
           }
           if(zero<=1){
            len=max(len,r-l+1-zero);
           }
           else{
              if(nums[l]==0){
               
               zero--;
              } 
              l++;
           }
         r++;
        }
        return zero==0?len-1:len;
    }
};