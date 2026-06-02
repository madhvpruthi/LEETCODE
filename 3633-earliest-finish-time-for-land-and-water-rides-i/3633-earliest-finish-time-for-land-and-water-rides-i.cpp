class Solution {
public:
    int calfinish(vector<int>&ls, vector<int>&ld, vector<int>&ws, vector<int>& wd ){
        int mini =INT_MAX;
        for(int i =0; i<ls.size(); i++){
            mini=min(mini, ls[i]+ld[i]);
        }
        int ans=INT_MAX;
        for(int i =0; i<ws.size(); i++){
            ans = min(ans, max(mini, ws[i])+wd[i]);
        }
        return ans ;
    }
    int earliestFinishTime(vector<int>& ltime, vector<int>& lduratn, vector<int>& wtime, vector<int>& wduratn) {
        return min(
            calfinish(ltime, lduratn, wtime, wduratn),
            calfinish(wtime, wduratn, ltime, lduratn)

        );
    }
};