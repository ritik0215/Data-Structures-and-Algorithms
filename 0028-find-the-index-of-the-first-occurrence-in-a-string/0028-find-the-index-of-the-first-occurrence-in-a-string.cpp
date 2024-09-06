class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int l=0,r=needle.size();
        int mini=INT_MAX;
      for(int i=0;i<n;i++){
          
          if(haystack.substr(i,r)==needle){
            return i;
          }
      }      
     
      return -1;
    }
};