class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3)return false;
        int x=INT_MAX,y=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<x)
              x=nums[i];
            else if(nums[i]>x &&nums[i]<y)
              y=nums[i];
            else if(nums[i]>x && nums[i]>y)
              return true;    
        }
        
       
        
      return false;
    }
};