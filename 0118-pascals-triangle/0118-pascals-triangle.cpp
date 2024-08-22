class Solution {
public:
    void solve(int n,vector<vector<int>> &ans,int j){
       
        if(j>n)return;
        vector<int> output(j,1);
        const vector<int>& temp=ans.back();
        for(int i=1;i<j-1;i++){
            output[i]= temp[i-1]+temp[i];
            
        }
        
        ans.push_back(output);
        solve(n,ans,j+1);

    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows>=1)ans.push_back({1});
        if(numRows>=2)ans.push_back({1,1});
        solve(numRows,ans,3);
        return ans;
    }
};