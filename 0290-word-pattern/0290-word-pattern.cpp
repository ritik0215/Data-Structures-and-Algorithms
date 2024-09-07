class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>mp;
        map<string,char>mp1;
        s=s+' ';
        string t="";
        int k=0;
       for(int i=0;i<s.size();i++){
        if(k>=pattern.size())return false;
          if(s[i]!=' '){
            t.push_back(s[i]);
          }
          else{
            
            if(mp.find(pattern[k])!=mp.end()&&mp[pattern[k]]!=t||mp1.find(t)!=mp1.end()&&mp1[t]!=pattern[k]){
               return false;
            }
            else{
                mp1[t]=pattern[k];
                mp[pattern[k++]]=t;
                t="";
                
            }
          }
       }
        return k>=pattern.size()?true:false;
    }
};