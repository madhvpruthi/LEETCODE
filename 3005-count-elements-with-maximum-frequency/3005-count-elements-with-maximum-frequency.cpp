class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxf=0;
        int countmax=0;

        for(int x: nums){
            freq[x]++;
            if(freq[x]==maxf){
                countmax++;
            }
            else if(freq[x]>maxf){
                maxf = freq[x];
                countmax=1;
            }
        }
        return maxf * countmax;
    }
};