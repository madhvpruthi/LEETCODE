class Solution {
    public int maxProfit(int[] prices) {
        int maxp=0;
        int lowst=prices[0];
        int n = prices.length;
        for(int i =0; i<n ;i++){
            int p = prices[i]-lowst;
            maxp=Math.max(maxp,p);
            lowst = Math.min(lowst, prices[i]);
        }
        return maxp;
    }
}