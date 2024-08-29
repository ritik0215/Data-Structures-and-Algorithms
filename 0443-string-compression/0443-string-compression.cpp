class Solution {
public:
    int compress(vector<char>& chars) {
       
        if(chars.size()==1)
          return 1;
        char ch=chars[0];
        int k=1,j=0;
        for(int i=1;i<chars.size();i++){
            if(chars[i]==ch){
               k++;
            }
            else{
               if(k==1){
                chars[j++]=ch;
               }
               else{
                    chars[j++]=ch;
                    string s=to_string(k);
                    for(char c:s){
                        chars[j++]=c;
                    }
               }
               ch=chars[i];
                k=1;
            }
        }
        chars[j++]=ch;
        if(k>1){
        string s=to_string(k);
        for(char c:s){
            chars[j++]=c;
        }
        }
        chars.resize(j);
        return chars.size();
    }
};