class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char,int>mp2;

       
        for(char x:magazine){
            mp2[x]++;
        }
        for(char x:ransomNote){
            if(mp2.find(x)==mp2.end()||mp2[x]<=0){
                return false;
            }
            mp2[x]--;
        }
        return true;
    }
};