class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0,maxCount=0,i;
      if(k==1){
       for(i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count++;
            }
            else{
                count=0;
            }
            maxCount=max(count,maxCount);

        }
      }
      else{
        for(i=0;i<k;i++){
          if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
           count++;
         }
        }
        maxCount=max(count,maxCount);
        i=0;
      for(int j=k;j<s.size();j++){
       
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
         count--;
         
       }
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
            count++;
        }
        maxCount=max(count,maxCount);
        i++;
      }
      }

      
      return maxCount;
    }
};