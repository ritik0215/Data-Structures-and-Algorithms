class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int l=0,r=needle.size();
        int mini=INT_MAX;
      for(int i=0;i<n;i++){
       
            if(needle[l]==haystack[i]){
                int j=i+1;
                mini=i;
                l++;
                while(l<r){
                    if(needle[l]!=haystack[j]){
                    l=0;
                    break;
                    }
                    else{
                        l++;
                        j++;
                    }

                }
                if(l>=r) return mini;
        }
      }
      
     
      return -1;
    }
};