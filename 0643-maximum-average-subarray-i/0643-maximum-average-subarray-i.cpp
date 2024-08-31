class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0,maxi=INT_MIN;
        int j=0,i;
        for(i=0;i<nums.size();i++){
            if(i<k){
             avg+=nums[i];
            }
            else{
             maxi=max(maxi,avg); 
             avg=avg+nums[i]-nums[j++];
             maxi=max(maxi,avg);
            } 
        }   
                    maxi=max(maxi,avg); 
 
            

        
       return maxi/k;
    }
};