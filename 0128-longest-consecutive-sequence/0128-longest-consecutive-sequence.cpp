class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       set<int> s(nums.begin(),nums.end());
        
        
        int longestSeq=0;
        for(int n:s){
            if(s.find(n-1)==s.end()){
               int curr=n;
               int currseq=1;

                while(s.find(curr+1)!=s.end()){
                    curr+=1;
                    currseq+=1;
                }
                longestSeq=max(longestSeq,currseq);
            }
        }
        return longestSeq;
    }
};