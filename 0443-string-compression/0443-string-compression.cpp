class Solution {
public:
    int compress(vector<char>& chars) {
       vector<char> v;
        if(chars.size()==1)
          return 1;
        char ch=chars[0];
        int k=1;
        for(int i=1;i<chars.size();i++){
            if(chars[i]!=ch){
               if(k==1){
                v.push_back(ch);
               }
               else{
                    v.push_back(ch);
                    string s=to_string(k);
                    for(char c:s){
                        v.push_back(c);
                    }
               }
               ch=chars[i];
                k=1;
            }
            else{
                k++;
            }
        }
        v.push_back(ch);
        if(k>1){
        string s=to_string(k);
        for(char c:s){
            v.push_back(c);
        }
        }
        chars=v;
        return chars.size();
    }
};