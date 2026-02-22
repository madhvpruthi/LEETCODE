class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
     int l=1,r=*max_element(piles.begin(),piles.end());
     while(l<r){
        int m=l+(r-l)/2;
        long long h1=0;
        for(int p:piles){
            h1+=(p+m-1)/m;
        }
        if(h1>h){
            l=m+1;
        }
        else{
            r=m;
        }

     }   
     return l;
    }
};