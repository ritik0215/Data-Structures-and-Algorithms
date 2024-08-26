class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasSum=0,costSum=0,n=gas.size();
        int start=0,leftgas=0;
        for(int i=0;i<n;i++){
            gasSum+=gas[i];
            costSum+=cost[i];
            leftgas+=gas[i]-cost[i];

            if(leftgas<0){
                start=i+1;
                leftgas=0;
            }
        }
         return (gasSum>=costSum)?start:-1;
    }
};