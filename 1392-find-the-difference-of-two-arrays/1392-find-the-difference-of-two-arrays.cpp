class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
            set<int>st1(nums1.begin(),nums1.end());
            set<int>st2(nums2.begin(),nums2.end());
        
        
        vector<int> op1,op2;
        for(int i:st1){
            if(st2.find(i)==st2.end()){
                op1.push_back(i);
            }    
        }
        for(int i:st2){
            if(st1.find(i)==st1.end()){
                op2.push_back(i);
            }    
        }
        
         return {op1,op2};
    }
};