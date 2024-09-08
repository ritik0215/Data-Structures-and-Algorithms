class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mp1;
        map<char,int>mp2;

        for(char c:ransomNote){
            mp1[c]++;
        }
        for(char x:magazine){
            mp2[x]++;
        }
        for(char x:ransomNote){
            if(mp2.find(x)==mp2.end()||mp2[x]<mp1[x]){
                return false;
            }
        }
        return true;
    }
};