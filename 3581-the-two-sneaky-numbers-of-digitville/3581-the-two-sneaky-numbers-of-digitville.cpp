class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=i){
        //         while(nums[i]!=i){
        //             swap(nums[nums[i]],nums[i]);
        //         }
        //     }
        // }
        
        // for(int i =0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //           ans.push_back(nums[i]);
        //     }
        //     if(ans.size()==2)break;
        // }
        // return ans;

        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
            if(mp[i]==2){
                ans.push_back(i);
            }
            
        }
        
        return ans;
    }
};