class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int count = 0;
        int left =0; 
        int high = k-1;
        while(high < s.length()){
            string sub = s.substr(left, k);
            int value = stoi(sub);
            if (value != 0 && num % value == 0) {
                count++;
            }

            left++;
            high++;
        }
        return count;
    }
};