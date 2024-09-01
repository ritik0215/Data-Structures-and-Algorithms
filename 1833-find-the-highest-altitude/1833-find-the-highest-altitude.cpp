class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0,alti=0;
        for(int i=0;i<gain.size();i++){
            alti=alti+gain[i];
            maxi=max(maxi,alti);
        }
        return maxi;
    }
};