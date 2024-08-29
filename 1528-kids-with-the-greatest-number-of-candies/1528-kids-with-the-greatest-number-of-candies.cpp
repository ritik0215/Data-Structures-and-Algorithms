class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=INT_MIN;
        vector<bool> v(candies.size(),0);
        for(int i=0;i<candies.size();i++){
            maxi=max(maxi,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            if(extraCandies+candies[i]>=maxi){
                 v[i]=true;
            }
            else v[i]=false;
        }
        return v;
    }
};