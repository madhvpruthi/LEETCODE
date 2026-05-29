class Solution {
public:
    int minElement(vector<int>& nums) {
        int minv = INT_MAX;
        for(int num:nums){
            int currentsum=0;
            while(num>0){
                currentsum+=num%10;
                num/=10;
            }
            minv = min(minv , currentsum);
        }
        return minv;
    }
};