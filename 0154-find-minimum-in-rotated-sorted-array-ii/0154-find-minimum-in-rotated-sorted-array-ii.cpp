class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1,ans=nums[0];
        while (low<=high){
            int mid=(low+high)/2;
            ans=min(ans,nums[mid]);
            if (nums[low]==nums[mid] && nums[mid]==nums[high]){
                //ans=nums[mid];
                low++;
                high--;
            }
            else if (nums[mid]>nums[high]){
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        return ans;
    }
};