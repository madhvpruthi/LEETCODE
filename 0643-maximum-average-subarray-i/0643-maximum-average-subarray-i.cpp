class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int wndowsum=0;
        for(int i=0; i<k ; i++){
            wndowsum+=nums[i];
        }
        int maxsum = wndowsum;
        for(int i =k; i<nums.size(); i++){
            wndowsum+=nums[i];
            wndowsum-=nums[i-k];
            maxsum = max(maxsum, wndowsum);
        }
        return (double) maxsum/k;
    }
};