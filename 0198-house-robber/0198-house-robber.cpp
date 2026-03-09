class Solution {
public:
    int rob(vector<int>& nums) {
        int prev=0;
        int maxmony=0;
        for(int curr : nums){
            int temp = max(maxmony, prev+curr);
            prev = maxmony;
            maxmony = temp;
        }
        return maxmony;
    }
};