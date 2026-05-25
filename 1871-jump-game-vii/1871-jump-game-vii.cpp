class Solution {
public:
    bool canReach(string s, int minjump, int maxjump) {
        int n = s.size();
        if(s[n-1] == '1') return false;

        vector<int> dp(n,0);
        dp[0]=1;
        int reachable=0;

        for(int i=1; i<n; i++){
            if(i>= minjump && dp[i-minjump]) reachable++;
            if(i>maxjump && dp[i-maxjump-1]) reachable--;
            if(reachable>0 && s[i]=='0') dp[i]=1;
        }
        return dp[n-1];
    }
};