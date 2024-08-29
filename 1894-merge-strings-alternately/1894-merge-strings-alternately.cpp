class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int n1=word1.size();
        int n2=word2.size();
        int k=0;
        int i=0,j=0;
        while(k<n1+n2){
            if(k%2==0&&i<n1||j>=n2){
                ans+=word1[i];
                i++;
               
            }
            else{
                ans+=word2[j];
                j++;
            }
             k++;
        }
        return ans;
    }
};