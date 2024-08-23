class Solution {
public:
    string removeDuplicates(string s) {
        // stack<int> s1;
        // for(char c:s){
        //     if(!s1.empty()&& s1.top()==c)s1.pop();
        //     else s1.push(c);
        // }
        //  s="";
        //  while(!s1.empty()){
        //     s.push_back(s1.top());
        //     s1.pop();
        //  }
        //  reverse(s.begin(),s.end());
        //  return s;
        string ans="";
        for(char c:s){
            if(!ans.empty() && ans.back()==c)ans.pop_back();
            else ans.push_back(c);
        } 
        return ans; 
    }
};