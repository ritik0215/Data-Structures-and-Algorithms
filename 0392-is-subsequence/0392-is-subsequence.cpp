class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(int i=0;i<t.size();i++){
          if(j==s.size()){
            return true;
          }
          if(s[j]==t[i]){
            j=j+1;
          }
        }
        if(j==s.size()){
            return true;
        }

        return false;
    }
};