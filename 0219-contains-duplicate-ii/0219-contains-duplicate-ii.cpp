class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            count=0;
            if(mp[nums[i]]>=2){
                count=1;
                int j=i+1;
                while(j<nums.size()){
                   if(nums[i]==nums[j]&&abs(i-j)<=k){
                        count+=1;
                   }
                   j++;
                }
                if(count>=2)return true;
            }
        }
        return false;
    }
};