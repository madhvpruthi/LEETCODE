class Solution {
    public boolean checkDivisibility(int n) {
        int og = n; 
        int sum =0;
        int pro=1;

        while(n>0){
            int digit = n%10; 
            sum+=digit;
            pro *= digit;
            n/=10;
        }

        int dvs=sum+pro;
        return og % dvs == 0;
    }
}