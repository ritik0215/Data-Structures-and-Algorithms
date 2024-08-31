class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0,i;
        for(i=0;i<k;i++){
            avg+=nums[i];
        }
        int j=0;
        double maxi=avg;
        for(i=k;i<nums.size();i++){
            
            avg=avg+nums[i]-nums[j++];
            maxi=max(maxi,avg);

        }
       
        return maxi/k;
    }
};