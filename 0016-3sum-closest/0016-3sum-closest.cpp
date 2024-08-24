class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX,minSum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
           int sum=0;
            while(j<k){
               sum=nums[i]+nums[j]+nums[k];
               int d=abs(sum-target);
               if(d<diff){
                diff=d;
                minSum=sum;
               }
               if(sum<target)j++;
               else if(sum>=target)k--;

            

            }
        }
        return minSum;
    }
};