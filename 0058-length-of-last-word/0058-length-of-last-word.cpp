class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int i,j;
        for(i=0;i<s.size();i++){
            if(s[i]==' '){
                continue;
            }
            else break;
        }
        for(j=i;j<s.size();j++){
            if(s[j]==' ')
             break;  
        }
        return j-i;
    
    }
};