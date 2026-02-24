class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int ans = 0;

        for (auto num : nums) {
            pq.push(num);
            ans += num;
        }

        while (k) {
            int smallest = pq.top();
            ans = ans - (2 * smallest);
            pq.pop();
            pq.push(-smallest);
            k--;
        }

        return ans;
    }
};