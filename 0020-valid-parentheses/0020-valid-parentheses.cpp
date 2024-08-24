class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        for(char i:s){
            if(i=='('||i=='{'||i=='[')s1.push(i);
            else if(!s1.empty()&& s1.top()=='(' && i==')') s1.pop();
            else if(!s1.empty()&& s1.top()=='{' && i=='}') s1.pop();
            else if(!s1.empty()&& s1.top()=='[' && i==']') s1.pop();
            else 
               return false;
            
        }
        if(s1.empty())return true;
        return false;
    }
};