class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k=flowerbed.size();
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                bool left=(i==0)||!flowerbed[i-1];
                bool right=(i==k-1)||!flowerbed[i+1];
                if(left&&right){
                    flowerbed[i]=1;
                    n--;
                }
            }

        }
       

       return n<=0;   
    }
};