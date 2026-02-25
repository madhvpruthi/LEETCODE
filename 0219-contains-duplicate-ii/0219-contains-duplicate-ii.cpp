class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> res;
        for(int i =0; i<nums.size(); i++){
            if(i>k){
                res.erase(nums[i-k-1]);
            }
            if(res.find(nums[i]) != res.end()){
                return true;
            }
            res.insert(nums[i]);
        }
        return false;
    }
};